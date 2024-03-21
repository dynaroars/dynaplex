import numpy
from sklearn.metrics import r2_score
import logging
from collections import OrderedDict
import argparse
from pathlib import Path
from rec_solver import Rec_term, Div_and_conquer_recurrence, Linear_recurrence


class Loop:

    def __init__(self, uid, status, parent=None):
        """ uid is the unique loop ID
            status can be stacked (S) nested (N) or original (O)
            parent is the parent loop for S and N loops
        """

        # assert((uid==None) or (status=='O' and parent.uid()==None) or ((status=='S' or status=='N') and parent!=None)), "status= {} and parent = {}: Mismatch between parent and status for loop: {}".format(status, parent.uid, uid)
        self.uid = uid
        self.status = status
        self.parent = parent
        self.degree = None

    def compute_bound(self, dc, invs):
        """ dc is the dict of difference constraints
            invs = is the dict of all inv
            inv is the degree of poly relation between loop counter (dc variable) and problem size
            loops = {uid: bound} of computed bounds so far
            for nested: loop_bound = ((diff_constraint)^invariant) * (parent_bound)
            for stacked: loop_bound = max((diff_constraint)^invariant, (parent_bound))
        """
        solved_dc = solve_dc(dc[self.uid])
        self.degree = invs[self.uid] * solved_dc
        logging.debug("Loop {} difference constraint solution: O(n^{})".format(self.uid, solved_dc))

        assert(isinstance(self.degree, int)), "Couldn't compute bound for loop: {}".format(self.uid)

        return self.degree

    def get_uid(self):
        return self.uid

    def get_status(self):
        return self.status

    def get_parent(self):
        return self.parent

    def get_degree(self):
        return self.degree

    def __repr__(self):
        return "{}_{}_{}".format(self.uid, self.status, self.parent)



def read_trace_file_and_parse(filename, fmt):
    """ takes a file of raw traces, fmt is the format of traces (DC or inv)
        separate traces into individual loops
        returns a dict where key is the loopId and
        value is list of tuples (depth, loopVar) for that loop
        or (problem_size, loopVar) depending on the status ("inv" or "DC")
    """
    data_dict = {}
    loops = {}
    with open(filename, 'r') as file:
        for line in file:
            parts = line.strip().split('; ')
            if len(parts) == 3:
                ID, depth, counter = parts
                # ID: <UID>_<status>_<parent>
                uid, status, parentID = ID.strip().split('_')
                if (fmt == "DC") and (uid not in loops) and (uid!="None"):
                    loops[uid] = Loop(uid, status, parentID)

                if uid not in data_dict:
                    data_dict[uid] = [(int(depth), int(counter))]
                else:
                    data_dict[uid].append((int(depth), int(counter)))

    if fmt =="DC":
        logging.debug(f"Loops found: {[loops[p] for p in loops.keys()]}")

    return data_dict, loops


def compute_difference_constraints(trace_dict):
    """ takes a dict of loop traces
        computes difference constraint for each loop
    """

    diff_constraints = {}
    for loop_id, tuples_list in trace_dict.items():
        diffs = set()
        for i in range(len(tuples_list) - 1):
            depth_i, counter_i = tuples_list[i]
            depth_j, counter_j = tuples_list[i + 1]

            # Compute the difference constraint
            if depth_i + 1 == depth_j:
                diff = abs(counter_j - counter_i)
                diffs.add(diff)
        # keep the slowest terminating DC without x <= x' + 0
        if len(diffs)>1 and 0 in diffs:
            diffs.remove(0)
        if len(diffs)<1:     # if the traces only contain one or two lines then the program is constant
            diff_constraints[loop_id] = 0
        else:
            diff_constraints[loop_id] = min(diffs)
        # TODO: How do I check if the loop is constant even tho it may have a DC
    dcs = ["{}: T(n_0) <= T(n_1) - {}".format(p, diff_constraints[p]) for p in diff_constraints.keys()]
    logging.debug("Difference Constraints: {}".format(dcs))
    return diff_constraints

def solve_dc(dc):
    """ takes a difference constraint in the form T(n_0) <= T(n_1) - 1
        solves using annihilator method
        returns the max degree of the annihilator solution
    """
    if dc==0:
        return 0

    # out_coef T(in_coef * symbol + cons)
    tn0 = Rec_term(out_coef=1, in_coef=1, cons=0)
    tn1 = Rec_term(out_coef=-1, in_coef=1, cons=-1)
    rhs = {"constant": dc}
    lin_rec = Linear_recurrence([tn0, tn1], rhs)
    _, roots = lin_rec.char_eq()
    duplicates, _ = lin_rec.get_duplicate_roots(roots)
    sol = max(duplicates.values())-1
    return sol

def compute_invariant(traces):
    """ takes a list of tuples (problem_size, loop_counter)
        finds a polynomial relation between the loop_counter and the problem_size
        returns degree of the polynomial relation (constant = 0); empty traces are considered constant relation
    """
    invariants = {}

    for loop_id, traces_list in traces.items():
        sizes, counters = [], []
        for i in range(len(traces_list) - 1):
            size, counter = traces_list[i]
            sizes.append(size)
            counters.append(counter)
        degree = poly_regression(sizes, counters, loop_id) #relation isn't necessary
        invariants[loop_id] = degree

    logging.debug("Max degree of polynomial invariants: {}".format(invariants))
    return invariants


def poly_regression(sizes, counters, loop_id = '0_O_None', maxdeg = 3):
    """ Computes polynomial models to estimate how loop_counter relate to problem_size
        returns degree of the relation
    """
    assert(len(sizes)==len(counters)), "Invalid traces"

    if (sizes==counters): #TODO: fix this
        # print(f"sizes: {sizes}\n\n counters: {counters}")
        logging.debug("Polynomial invariant for {} loop controller: [(poly1d([ 1, 0]), 1.0)]".format(loop_id))
        return 1
    if(len(set(counters)) < 2): #loop counter doesn't depend on size
        logging.debug("Polynomial invariant for {} loop controller: [(poly1d([ 1]), 1.0)]".format(loop_id))
        return 0

    split_index = int((len(sizes)+1)*.80)
    train_sizes, train_counters = sizes[:split_index], counters[:split_index]
    test_sizes, test_counters = sizes[split_index:], counters[split_index:]
    maxsize = max(sizes)
    models = []
    r2_scores = []
    inv = -1
    highest_r2 = 0.25
    for i in range(0, maxdeg+1):
        mymodel = numpy.poly1d(numpy.polyfit(train_sizes, train_counters, i))
        models.append(mymodel)

    #discard spurious models
    tmp = models
    models = []
    for model in tmp:
        order = model.order
        high_order_coe = model[order]
        if high_order_coe > (1.0/maxsize): #spurious: coef of model.order < 1/maxsize
            r_square = r2_score(test_counters, model(test_sizes))
            if r_square > 0:
                models.append(model)
                r2_scores.append(r_square)
                if highest_r2 < r_square:
                    highest_r2 = r_square
                    inv = model.order

    logging.debug("Polynomial invariant for {} loop controller: {}".format(loop_id, [(m, r) for m, r in zip(models, r2_scores)]))
    assert(len(r2_scores) == len(models)), "Mismatch between models and their corresponding r_square"
    if (len(models)<1) or (inv<0):
        return 0

    return inv

def reversed_topological_sort(graph):
    """ takes a graph whose nodes are loops and their relationship (nested or stacked)
        returns a reversed topological sort, i.e. list of loops
        such that each loop appears before all it's parent loops
    """
    adjacency_list = {}
    nodes = {}

    for node in graph:
        node_id = node.get_uid()
        parent_id = node.get_parent()
        adjacency_list[node_id] = parent_id
        nodes[node_id] = node

    # Perform depth-first search
    visited = set()
    result = []

    def dfs(node_id):
        if node_id not in visited:
            visited.add(node_id)
            parent_id = adjacency_list.get(node_id, 'None')
            if parent_id != 'None':
                dfs(parent_id)
            result.append(node_id)

    for node_id in adjacency_list:
        dfs(node_id)

    # Reverse the result to get the reversed order
    result.reverse()
    # Reconstruct the sorted list with the original format using a loop
    sorted_nodes = [nodes[node] for node in result]
    return sorted_nodes

def compute_complexity(loop_dict):
    """ computes overall complexity by starting with
        the inner most loops (for nested) of bottom most loops (for stacked)
        loop_dict={loop: degree}
    """
    print("loops: ", loop_dict)
    if len(loop_dict) == 1:
        print(next(iter(loop_dict.items())))

    sorted = reversed_topological_sort(loop_dict.keys())
    root_id = sorted[-1].get_uid()
    parent_complexity = {l.get_uid(): l.get_degree() for l in sorted}
    original_childs = {l: l.get_degree() for l in sorted if l.get_parent() == root_id}
    keys = [l.get_uid() for l in original_childs.keys()]

    for loop in sorted:
        uid = loop.get_uid()
        status = loop.get_status()
        parent_id = loop.get_parent()
        degree = loop_dict[loop] # self.degree()
        if status == 'N':
            parent_complexity[parent_id] += degree
            if uid in keys:
                original_childs[loop] += degree
        elif status == 'S':
            parent_complexity[parent_id] = max(parent_complexity[parent_id], degree)
            if uid in keys:
                original_childs[loop] = max(parent_complexity[parent_id], degree)
        elif status == 'O':
            for l, d in original_childs.items():
                if l.get_status() == 'N':
                    parent_complexity[uid] = max(parent_complexity[uid], d)
                elif l.get_status() == 'S':
                    parent_complexity[uid] += d
                # else:
                    # assert(False, "Something wrong in combining loop bounds for the original loop")
            return parent_complexity[uid]


def compute_overall_complexity(loop_dict):
    #TODO: Double check for multiple nested and stacked loops. for example two stacked loops nested inside one loop
    overall_complexity = 0
    print("loops: ", loop_dict)
    # Create a dictionary to store the maximum complexity for each parent loop
    parent_complexities = {}
    for loop, degree in loop_dict.items():
        uid = loop.get_uid()
        status = loop.get_status()
        parent_id = loop.get_parent()

        if status == 'O':
            # Original loop: Set overall complexity to the maximum of itself and the current value
            parent_complexities[uid] = degree
            overall_complexity = max(overall_complexity, degree)
        elif status == 'S':
            # Stacked loop: Store the maximum stack complexity for the parent loop
            if parent_id not in parent_complexities:
                parent_complexities[parent_id] = degree
            else:
                parent_complexities[parent_id] = max(parent_complexities[parent_id], degree)
        elif status == 'N':
            # Nested loop: Compute the nested complexity and store it for the parent loop
            if parent_id not in parent_complexities:
                parent_complexities[parent_id] = degree
            else:
                parent_complexities[parent_id] += degree

    # Combine the stack complexities with the original complexities
    for parent_id, stack_degree in parent_complexities.items():
        overall_complexity = max(overall_complexity, stack_degree)

    return overall_complexity

def main(path):
    # dc_filename = '{}/traces_dc.txt'.format(path)
    # inv_filename = '{}/traces_inv.txt'.format(path)
    inv_filename = "/var/folders/8z/kmhn_s9x4ds0hlqrp29tm2jm0000gn/T/tmppie65eug"
    dc_filename = "/var/folders/8z/kmhn_s9x4ds0hlqrp29tm2jm0000gn/T/tmphyyl7ah4"
    dc_traces, loops = read_trace_file_and_parse(dc_filename, "DC")
    inv_traces, _ = read_trace_file_and_parse(inv_filename, "inv")

    assert(len(loops)), "No loops found in the DC traces. Could be malformed traces or loops unreachable using random input"
    dc = compute_difference_constraints(dc_traces)
    invs = compute_invariant(inv_traces)

    bounds = {l: (l.compute_bound(dc, invs)) for _, l in loops.items()}

    logging.debug("Loop bounds: {}".format(bounds))

    complexity = compute_overall_complexity(bounds)

    return complexity

if __name__ == '__main__':

    parser = argparse.ArgumentParser(prog="loop_bound")
    parser.add_argument('-trace', help="path/to/trace_file")
    parser.add_argument('-log', help="logging levels: debug -> 10; info -> 20; warning -> 30; error -> 40", default=20)
    args = parser.parse_args()
    path = Path(args.trace).resolve()
    log_level = int(args.log)
    assert(isinstance(log_level, int)), "logging levels: debug -> 10; info -> 20; warning -> 30; error -> 40"
    logging.basicConfig(encoding='utf-8', level=log_level, format='%(levelname)s - %(message)s')

    complexity = main(path)
    logging.info("Overall complexity: O(n^{})\n".format(complexity))
