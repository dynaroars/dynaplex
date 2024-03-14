import argparse
from rec_solver import Rec_term, Div_and_conquer_recurrence, Linear_recurrence
import subprocess as sp
import os
import logging
from pathlib import Path
from sympy import symbols, parse_expr, limit, oo, sympify
import loop_bound
import warnings
from functools import cmp_to_key
import re

#execution trace tree for 1 run
class Node(object):
    def __init__(self, depth, data, parent=None):
        self.parent = None
        self.set_parent(parent)
        self.children = set() #is set feasible or do i need a list
        self.data = data
        self.depth = depth
        return

    def set_parent(self, parent):
        if self.parent and self.parent is not parent:
            #make sure it doesn't already have a parent
            self.parent.children.remove(self)
        self.parent = parent
        return

    def get_siblings(self):
        if self.parent is None:
            return []
        return [s for s in self.parent.children if s is not self]

    def get_data(self):
        return self.data

    def get_depth(self):
        return self.depth

    def get_parent(self):
        return self.parent

    def get_children(self):
        return self.children

    def add_child(self, node):
        self.children.add(node)
        node.set_parent(self)
        return

    def add_sibling(self, node):
        assert self.parent, "root node can't have siblings"
        self.parent.add_child(node)
        return

    def __str__(self):
        return "{};{}".format(self.depth, self.data)


def find_parent_node(node, prev):
    '''finds parent node by backtracking on depth
    or finds inorder parent of the given node
    prev is the previous node constructed
    '''
    target_depth = node.get_depth()-1
    while prev:
        depth = prev.get_depth()
        if depth == target_depth:
            return prev
        prev = prev.get_parent()
    return None

def read_rec_traces(filename):
    with open(filename) as file:
        lines = file.readlines()
        root = lines[0].rstrip('\n').split(';')
        root = [int(root[0]), root[1]]
        prev = Node(root[0], float(root[1]))
        root = prev
        line_number = 1
        for line in lines[1:]:
            line = line.rstrip('\n').split(';')
            line_number += 1
            assert(len(line)==2), "bad traces on line number {} in file {}".format(line_number, filename)
            depth, data = int(line[0]), float(line[1])
            new_node = Node(depth, data)
            parent = find_parent_node(new_node, prev)
            # assert parent, "Couldn't find parent node for node on line number {} in file {}".format(line_number, filename)
            if not parent:
                prev = new_node
                continue
            parent.add_child(new_node)
            prev = new_node

        return root

def read_poly_traces(filename):
    ''' reads traces from a file. format "size;counter"'''
    sizes = []
    counters = []
    with open(filename) as file:
        lines = file.readlines()
    for line in lines:
        size, counter = line.split(';')
        sizes.append(int(size))
        counters.append(int(float(counter.strip())))

    return sizes, counters

def vcmd(cmd, inp=None, shell=True):
    proc = sp.Popen(cmd,shell=shell,stdin=sp.PIPE,
                    stdout=sp.PIPE,stderr=sp.PIPE)
    return proc.communicate(input=inp)


def compute_recurrences(root):
    '''computes all possible recurrences between a node and its children
    recurrences are computed by differences and divide-and-conquer
    return a dictionary of possible recurrences with num_rec_calls as key and rec as value
    ex-> "2": set[(2.0, 2.0)], set[(6.0, 7.0)] means 2 rec_calls with each tuple coefs or diffs'''

    nodes=[]
    # push the current node onto the stack
    nodes.append(root)
    reca = {}
    recb = {}
    while (len(nodes)):
        curr = nodes[0]
        nodes.pop(0)
        # current node has been travarsed

        # store all the childrent of current node from
        # right to left.
        children = list(curr.get_children())
        num_calls = len(children)
        coefs = set() #for all chidren
        diffs = set()
        current_coefs = [] #for one child
        current_diffs = []
        for it in range(len(children)-1,-1,-1):
            nodes.insert(0,children[it])
            if round(children[it].get_data()) == 0:
                continue
            coe = curr.get_data() / children[it].get_data()
            dif = abs(curr.get_data() - children[it].get_data())
            if round(coe) != 0:
                current_coefs.append(round(coe))
            if round(dif) != 0:
                current_diffs.append(round(dif))

        if (len(current_coefs)!=num_calls or len(current_diffs)!=num_calls):
            #if one of the children data is 0 then skip because T(n-0) doesn't terminate and T(n/0) is undefined
            continue
        coef_tuple = tuple(current_coefs)
        diff_tuple = tuple(current_diffs)
        coefs.add(coef_tuple)
        diffs.add(diff_tuple)

        if num_calls in reca:
            tmpa = reca[num_calls]
            tmpb = recb[num_calls]
            reca[num_calls] = tmpa.union(coefs)
            recb[num_calls] = tmpb.union(diffs)
        else:
            reca[num_calls] = coefs
            recb[num_calls] = diffs

    return reca, recb


def prune_recurrences(recs, poly_regr):
    """
    prunes the spurious recurrences away
    - remove all recurrences with T(n-a) or T(n/a) where a>5
    - remove recurrences with frequency less than 50%
    - remove all recurrence leading to exponential complexity
    if polynomial regression predicts polynomial complexity
    - remove duplicate recurrence using ==
    """
    tmp = recs
    recs = []
    last_index = 0
    for r in tmp:
        # Rec_term -> out_coef T(in_coef * symbol + cons)
        terms = r.get_rec_terms()
        # coefs (out_coef, in_coef, cons)
        constants = [x.get_coefs() for x in terms[1:]]
        incoefs = [c[1] for c in constants]
        cons = [c[2] for c in constants]

        #check if a duplicate recurrence was found earlier
        simplified = r.get_simplified()
        duplicacy = [r==x or simplified==x for x in tmp[:last_index]]
        if last_index>0 and any(duplicacy):
            logging.debug("removed {} because it is a duplicate recurrence".format(r))
            continue
        last_index += 1
        # these recurrences correspond to exponential complexity
        if isinstance(r, Linear_recurrence):
            type = list(poly_regr.keys())[0]
            if (type=="polynomial" or type=="constant" or type=="logarithmic") and (len(terms)>2):
                logging.debug("removed {} because it solves to exponential complexity".format(r))
                continue
            if any(abs(i) >= 5 for i in cons):
                logging.debug("removed {} because it is a superfluous recurrence i.e. T(n-d) where d>= 5".format(r))
                continue

        # remove divide_and_conquer with coefs > 5
        if isinstance(r, Div_and_conquer_recurrence):
            if any(abs(i) >= 5 for i in incoefs):
                logging.debug("removed {} because it is a superfluous recurrence i.e. T(n/d) where d >= 5".format(r))
                continue
            if any(abs(i)==1 for i in incoefs):
                logging.debug("removed {} because it is an invalid recurrence i.e. T(n/1)".format(r))
                continue

        recs.append(r)

    return recs

def print_recurrences(reca, recb, rhs):
    #prints possible recurrence in human readable format
    tn = Rec_term(out_coef=1, in_coef=1, cons=0)
    recs = []
    for key in reca:
        if key == 0:
            continue
        coefs = reca[key]
        diffs = recb[key]
        for c in list(coefs):
            terms = [tn]
            for x in c:
                term = Rec_term(format="divide_and_conquer", out_coef=-1, in_coef=x, cons=0)
                terms.append(term)
            div_conquer = Div_and_conquer_recurrence(terms, rhs)
            recs.append(div_conquer)
        for d in list(diffs):
            terms = [tn]
            for y in d:
                term = Rec_term(out_coef=-1, in_coef=1, cons=-y)
                terms.append(term)
            lin_rec = Linear_recurrence(terms, rhs)
            recs.append(lin_rec)

    return recs

def compare_complexities(tuple1, tuple2):
    """
    compares two bounds using big O analysis
    tuple1 = (rec1, fn) and tuple2 = (rec2, gn)
    returns gn >= fn or fn == O(gn)
    """
    #Both fn and gn are exponential
    fn = tuple1[1]
    gn = tuple2[1]
    exp_pattern = re.compile(r'(\d+(\.\d+)?)\^n')
    match_fn = re.match(exp_pattern, fn)
    match_gn = re.match(exp_pattern, gn)
    if(match_fn and match_gn):
        fn_base, _ = fn.split('^')
        gn_base, _ = gn.split('^')
        if float(fn_base > gn_base):
            return 1
        else:
            return -1
    #fn is exponential but gn is polynomial
    elif(match_fn and not(match_gn)):
        return 1
    #gn is exponential but fn is polynomial
    elif(not(match_fn) and match_gn):
        return -1

    #Both fn and gn are not exponential
    nonexp_pattern = re.compile(r'n\^([\d.]+)(?:\(log\(n\)\)\^([\d.]+))?')
    match_fn = re.match(nonexp_pattern, fn)
    match_gn = re.match(nonexp_pattern, gn)
    if(match_fn and match_gn):
        fn_exp2 = 0
        gn_exp2 = 0
        try:
            _, fn_exp1, fn_exp2 = fn.split('^')
            fn_exp1, _ = fn_exp1.split(' ')
        except ValueError:
            _, fn_exp1 = fn.split('^')

        try:
            _, gn_exp1, gn_exp2 = gn.split('^')
            gn_exp1, _ = gn_exp1.split(' ')
        except ValueError:
             _, gn_exp1 = gn.split('^')

        if(float(fn_exp1) == float(gn_exp1)):
            if(float(fn_exp2) > float(gn_exp2)):
                return 1
            elif(float(fn_exp2) < float(gn_exp2)):
                return -1
            else:
                return -1
        if(float(fn_exp1) > float(gn_exp1)):
                return 1
        elif(float(fn_exp1) < float(gn_exp1)):
            return -1
    else:
        return -1

# def filter_complexity(recs, poly_regr):
#     """
#     eliminate all recurrences with complexity lower than poly_regr
#     """
#     filtered = []
#     type = list(poly_regr.keys())[0]
#     for r in recs:
#         terms = r.get_rec_terms()
#         coes = [c.get_coefs() for c in terms]
#         if (-1, 1, 0) in coes or isinstance(r, Linear_recurrence): #remove T(n) - T(n) (where is this rec coming from anyways?)
#             continue
#         sol = r.solve()
#         sol = sol.split('=')[-1]
#         sol = sol.replace('^', '**')
#         logging.debug(sol)
#         if compare_complexities(sol, poly_regr[type]):
#             filtered.append(r)
#
#         logging.debug("filtered" ,pretty(filtered))
#     return filtered

def get_frequency(recs, num_files, freq=0.90):
    """
    input is list of all recs. each list of pruned recs from tracefile combined
    returns a dict where recurrence is key and frequency is value
    remove recurrence that don't have at least a freq frequency (default=90%)
    """
    result = {}
    tmp = []

    for r in recs:
        hash = str(r) #use string to make it hashable
        if hash in result:
            result[hash] += 1
        else:
            result[hash] = 1

    assert(freq<1), "threshold frequency of recurrence can't be 1"
    filtered_recs = [key for key in recs if result[str(key)]/num_files >= freq]

    return filtered_recs

def unique_linear(recs):
    """
    Remove duplicate recurrences
    """
    # tmp = recs
    # recs = []
    # last_index = 0
    tmp = []
    for r in recs:
        if r not in tmp:
            tmp.append(r)
    # tmp = [r for r in tmp if r not in recs]
    # for r in tmp:
    #     #check if a duplicate recurrence was found earlier
    #     # simplified = r.get_simplified()
    #     duplicacy = [r==x for x in tmp[:last_index]]
    #     if last_index>0 and any(duplicacy):
    #         logging.debug("removed {} because it is a duplicate recurrence".format(r))
    #         continue
    #     last_index += 1
    return tmp

def equivalent_div_conq(recs):
    """
    removes divide_and_conquer recurrences that are equivalent.
    equivalent recs solves to the same complexity
    ex: T(n)-T(n/2)=1 and T(n)-T(n/3)=1 are equivalent
    keep only the representative of the equivalence class
    keep recs with smallest sum of in_coef ex: T(n)-T(n/2)=1
    """
    tmp = recs
    recs = []
    # keep all the linear recurrences
    for r in tmp:
        if isinstance(r, Linear_recurrence):
            recs.append(r)
    tmp = [r for r in tmp if r not in recs]

    #tmp only contains divide and conquer recurrences
    solved_recs = {r.master_theorem():[]  for r in tmp}
    for r in tmp:
        solved_recs[r.master_theorem()].append(r)

    # keep one recurrence per equivalence class
    # keys represent the equivalence class
    index = 0
    summed_incoef = []
    sum = 0
    for key in solved_recs:
        rlist = solved_recs[key]
        if len(rlist)==1:
            recs.append(rlist[0])
        elif len(rlist)>1:
            terms = [r.get_rec_terms() for r in rlist]
            for t in terms:
                for i in range(len(t)):
                    coe = t[i].get_coefs()
                    sum += coe[1]
                summed_incoef.append(sum)
                sum = 0
            index = summed_incoef.index(min(summed_incoef))
            recs.append(rlist[index])
            index = 0

    return recs

def simplify_linear(recs):
    """
    removes linear recurrences that belong to same complexity class.
    ex: T(n)-T(n-2)=1 and T(n)-T(n-1)=1 are both linear
    """
    tmp = recs
    recs = []
    # keep all the divide_and_conquer recurrences
    for r in tmp:
        if isinstance(r, Div_and_conquer_recurrence):
            recs.append(r)
    tmp = [r for r in tmp if r not in recs]

    # for recurrences with 2 rec terms
    # keep the one with smallest sum of in_coef
    summed_incoef = 0
    min_sum = 12
    res = 0
    for r in tmp:
        terms = r.get_rec_terms()
        if len(terms) == 2:
            for t in terms:
                # for i in range(len(t)):
                coe = t.get_coefs()
                summed_incoef += coe[1]
            if summed_incoef < min_sum:
                min_sum = summed_incoef
                res = r
        elif r not in recs:
            recs.append(r)
    if res and res not in recs:
        recs.append(res)
    return recs


def pretty(recs):
    return [str(r) for r in recs]

def estimate_bound(folder):
    sizes, counters = read_poly_traces('{}/traces_est.txt'.format(folder))
    estimated_bound = loop_bound.poly_regression(sizes, counters, maxdeg=3)
    for i in range(3,6):
        prev = estimated_bound
        estimated_bound = loop_bound.poly_regression(sizes, counters, maxdeg=i)
        if(prev<estimated_bound):
            estimated_bound = "exponential"
            return estimated_bound

    estimated_bound = "polynomial"
    return estimated_bound


def main():
    warnings.simplefilter("ignore")
    parser = argparse.ArgumentParser(prog="tree_search")
    parser.add_argument('-trace', help="path/to/trace_file")
    parser.add_argument('-maxdeg', help="maximum degree of polynomial relation to be inferred", default=4)
    parser.add_argument('-log', help="logging levels: debug -> 10; info -> 20; warning -> 30; error -> 40", default=20)
    args = parser.parse_args()
    folder = Path(args.trace).resolve()
    maxdeg = int(args.maxdeg)
    log_level = int(args.log)
    assert(isinstance(log_level, int)), "log level should be an integer from {0, 10, 20, 30, 40, 50}"
    logging.basicConfig(encoding='utf-8', level=log_level)
    rec_traces = '{}/traces_rec.txt'.format(folder)

    #Calculating polynomial relations
    logging.debug("Computing polynomial relations")
    if os.path.isfile('{}/traces_dc.txt'.format(folder)):
        poly_invariant = loop_bound.main(folder)
        logging.info("Polynomial bound for number of loop iteration per recursive call: O(n^{})".format(poly_invariant))
    else:
        logging.info("No Loops found: Polynomial bound for number of loop iteration per recursive call: O(1)")
    estimated_bound = estimate_bound(folder)
    logging.debug("Estimated complexity bound is {}".format(estimated_bound))


    logging.debug("Computing recurrence relations")
    tree = read_rec_traces(rec_traces)
    reca, recb = compute_recurrences(tree)
    recs = print_recurrences(reca, recb, {"polynomial": poly_invariant})
    logging.debug("Possible recurrences: {}".format(pretty(recs)))

    recs = prune_recurrences(recs, {estimated_bound: 1})
    logging.debug("Remaining recurrences after pruning {}".format(pretty(recs)))

    recs = equivalent_div_conq(recs)

    recs = unique_linear(recs)
    logging.debug("Remaining unique recurrences {}".format(pretty(recs)))

    recs = simplify_linear(recs)
    logging.debug("Remaining recurrences after simplification {}".format(pretty(recs)))

    bounds = {str(r): r.solve() for r in recs}
    bounds = {key: value[1] if isinstance(value, tuple) else value for key, value in bounds.items()}
    logging.debug("Corresponding bounds: {}".format(bounds))

    key_function = cmp_to_key(compare_complexities)
    sorted_bounds = sorted([(k, b) for k, b in bounds.items()], key=key_function)
    logging.debug("Sorted recurrences: {}".format(sorted_bounds))

    logging.info("Overall Recurrence: {}".format(sorted_bounds[0][0]))
    logging.info("Overall complexity: {}".format(sorted_bounds[0][1]))



if __name__ == '__main__':
    main()
