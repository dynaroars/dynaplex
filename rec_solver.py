from sympy import *
import math
import copy

class Rec_term:
    #recursive terms or the recurrence
    # out_coef T(in_coef * symbol + cons)
    def __init__(self, format='linear', out_coef=-1, in_coef=1, cons=0):
        # assert(cons <= 0), "Found term of the form T(n+a) while looking for T(n-a)"
        self.format = format
        self.out_coef = out_coef
        self.in_coef = in_coef
        self.cons = cons

    def get_coefs(self):
        return (self.out_coef, self.in_coef, self.cons)

    def __eq__(self, other):
        if isinstance(other, Rec_term):
            if(self.format==other.format and self.out_coef==other.out_coef and self.in_coef==other.in_coef and self.cons==other.cons):
                return True
            else:
                return False
        else:
            return False

    def __str__(self):
        if self.format == "divide_and_conquer":
            if self.out_coef == -1:
                out_coef = "-"
            else:
                out_coef = self.out_coef
            return "{}T(n/{})".format(out_coef, self.in_coef)

        if self.cons == 0:
            cons = ""
        else:
            cons = self.cons
        if self.in_coef == 1:
            in_coef = ""
        else:
            in_coef = self.in_coef
        if self.out_coef == 1:
            out_coef = ""
        elif self.out_coef == -1:
            out_coef = "-"
        else:
            out_coef = self.out_coef
        return "{}T({}n{})".format(out_coef, in_coef, cons)


class Div_and_conquer_recurrence():
    def __init__(self, rec_terms, rhs):
        self.rec_terms = rec_terms
        self.rhs = rhs

    def get_rec_terms(self):
        return self.rec_terms

    def solve(self):
        return self.master_theorem()

    def master_theorem(self):
        '''T(n) = a T(n/b) + (n^k(logn)^p)'''
        a = len(self.rec_terms)-1
        b = [x.get_coefs() for x in self.rec_terms[1:]]
        b = min([x[1] for x in b])
        p = 0
        type = list(self.rhs.keys())[0]
        value = self.rhs[type]

        if type == "constant":
            k = 0
        elif type == "polynomial":
            k = value
        elif type == "logarithmic":
            k, p = 0, value

        try:
            c = math.log(a,b) if b != 1 else 0
        except:
            return None
        if a > b**k:
            complexity = "n^{}".format(c)
        elif a == b**k:
            if p > -1:
                complexity = "n^{} (log(n))^{}".format(c, p+1) if p!=0 else "n^{} log(n)^1".format(c)
            elif p == -1:
                complexity = "n^{} log(log(n))".format(c)
            elif p < -1:
                complexity = "n^{}".format(c)
        elif a < b**k:
            if p >= 0:
                complexity = "n^{} (log(n))^{}".format(k, p)
            else:
                complexity = "n^{}".format(c)

        return "T(n) = {}".format(complexity)


    def __eq__(self, other):
        """
        T(n) = T(n/2)+T(n/2)+1 with T(n) = 2T(n/2)+1 is not handled properly
        """
        if isinstance(other, Div_and_conquer_recurrence):
            #shallow copy don't affect the object atribute values
            other_terms = copy.copy(other.get_rec_terms())
            self_terms = copy.copy(self.get_rec_terms())
            if not(self.rhs==other.rhs and len(self_terms)==len(other_terms)):
                return False
            for i in range(len(self_terms)):
                t = self_terms[i]
                if not(t in other_terms):
                    return False
                other_terms.remove(t)
                #remove term from terms so you don't compare to it twice
            return True
        else:
            return False

    def get_simplified(self):
        """
        simplify a divide and conquer recurrence to master_theorem format
        T(n) = a T(n/b) + (n^k(logn)^p)
        """
        a = len(self.rec_terms)-1
        b = [x.get_coefs() for x in self.rec_terms[1:]]
        b = min([x[1] for x in b])
        terms = [self.rec_terms[0]]
        for i in range(a-1):
            rec = Rec_term(format == "divide_and_conquer", out_coef=-1, in_coef=1/b, cons=0)
            terms.append(rec)
        simplified = Div_and_conquer_recurrence(terms, self.rhs)
        return simplified



    def predict(self):
        """
        we use this to implement a comparator to sort recurrences
        1 correspond to constant
        2 correspond to logarithmic
        3.x correspond to polynomial of degree x
        4 correspond to nlog n
        5 corresponds to exponential
        """
        complexity = self.master_theorem()


    def __str__(self):
        res = ""
        type = list(self.rhs.keys())[0]
        value = list(self.rhs.values())[0]
        for t in self.rec_terms:
            res = res + str(t) + " "

        if type == "logarithmic":
            return res+" = n^{}logn".format(value)
        elif type == "polynomial":
            return res+" = n^{}".format(value)
        elif type == "exponential":
            return res+" = {}^n".format(value)
        elif type == "constant":
            return res+" = {}".format(value)
        else:
            assert(False), "rhs not recognized"

class Linear_recurrence:
    # recurrence relation T(n) = rec_terms + rhs
    # rhs = {type: value} where type is constant, polynomial or exponential
    # value is constant or highest degree or base of exponential
    def __init__(self, rec_terms, rhs):
        assert (len(rhs)==1), "Right hand side of reccurrence has to be one term"
        self.rec_terms = rec_terms
        self.rhs = rhs

    def get_rec_terms(self):
        return self.rec_terms

    #get annihilator for rhs
    def get_annihilator(self):
        type = list(self.rhs.keys())[0]
        value = self.rhs[type]
        if type == "constant":
            ann = "x - 1"
        elif type == "polynomial":
            ann = "(x - 1)**{}".format(value+1)
        elif type == "exponential":
            ann = "x - {}".format(value)
        elif type == "poly-exponential":
            degree, coef = value
            ann = "(x - {})**{}".format(coef, value+1)
        else:
            assert(False), "Couldn't find annihilator for the right hand side of recurrence: {}".format(self.rhs)
        return ann



    #get characteristic equation
    def char_eq(self):
        coefs = [r.get_coefs() for r in self.rec_terms]
        # coefs return [(self.out_coef, self.in_coef, self.cons)]
        coefs.sort(key=lambda y: y[2])
        max_deg = abs(coefs[0][2]) #maxdeg of the char equation
        # print(max_deg)
        # print("original terms", coefs)
        #make sure the recurrence is complete.
        #otherwise add missing terms * 0
        tmp = coefs
        prev = tmp[0]
        #add missing terms multiplied by 0
        #what if more than 1 term have the same cons?
        for i in range(1, len(tmp)):
            if tmp[i][2] != prev[2]+1:
                dummy_term = Rec_term(out_coef=0, cons=prev[2]+1)
                dummy_coefs = dummy_term.get_coefs()
                coefs.append(dummy_coefs)
            prev = tmp[i]

        # coefs.pop()
        coefs.sort(key=lambda y: abs(y[2])) #sort reversed

        # print("sorted terms ", coefs)
        # eq =
        eq = "x**{}".format(max_deg)
        for coe in coefs[1:]:
            # print(coe)
            deg = max_deg + coe[2]
            # print(eq)
            # eq = eq + " {} x**{}".format()
            if coe[0]==-1:
                eq = eq + " - x**{}".format(deg)
            elif coe[0]==1:
                eq = eq + " + x**{}".format(deg)
            elif coe[0]==0:
                continue
            elif coe[0]<0:
                eq = eq + " {}*x**{}".format(coe[0], deg)
            else:
                eq = eq + " + {}*x**{}".format(coe[0], deg)

        # print("characteristic equation {}".format(eq))
        e = Symbol('x')
        lhs = parse_expr(eq, evaluate=True)
        annihilator = parse_expr(self.get_annihilator(), evaluate=True)
        annihilator = parse_expr(str(annihilator), evaluate=True)
        # print("annihilator {}".format(annihilator))
        eq = lhs * annihilator
        factors = str(factor(eq))
        # print("After applying annihilator ", eq)
        roots = solve(eq, e)
        tmp = []
        #get duplicate roots
        for root in roots:
            fact = "x - {}".format(root)
            if fact in factors:
                try:
                    fact_index = factors.index(fact)
                    multi_index = factors.index(")**", fact_index)
                    multi = int(factors[multi_index+3])
                    # print("multiplicity ", multi)
                except:
                    # it's not multiple root
                    continue
                for i in range(multi-1):
                    tmp.append(root)
        roots = roots + tmp
        return eq, roots

    def get_duplicate_roots(self, roots):
        '''
        Get frequency count of duplicate roots.
        Returns duplicate roots with their multiplicity and unique roots
        '''

        dict_roots = dict()
        for elem in roots:
            if elem in dict_roots:
                dict_roots[elem] += 1
            else:
                dict_roots[elem] = 1

        # Filter root-multiplicity pairs in dictionary. keep roots with multiplicity > 1
        dup_roots = {key:value for key, value in dict_roots.items() if value > 1}
        uniq_roots = {key:value for key, value in dict_roots.items() if value == 1}
        return dup_roots, uniq_roots

    def solve(self):
        """
        General solution is $T_n = \sum_{i=1}^{k} c_i r_{i}^{n}$ if no roots are the same
        for roots with multiplicity q: $T_n = n^p r^{n}$ with p in [0, q-1]
        k is number of roots
        c_i and r_i are the i^th coefficient and root
        coefficients are unkonwn unless we have boundary conditions to calcualte them
        """
        _, roots = self.char_eq()
        assert (isinstance(roots, list) and len(roots)>0), "no roots to the characteristic equation"

        #separate unique roots with duplicate roots
        dup_roots, uniq_roots = self.get_duplicate_roots(roots)
        # print("dup_roots: ", dup_roots, "\n uniq_roots: ", uniq_roots)

        i = 0
        gen_sol = ""
        for r in uniq_roots:
            gen_sol = gen_sol + "c_{} ({})^n + ".format(i,r)
            i += 1

        for key, value in dup_roots.items():
            sol = ""
            for p in range(value):
                term = "c_{} n^{} {}^n + ".format(i, p, key)
                sol = sol + term
                i += 1
            gen_sol = gen_sol + sol

        gen_sol = "T(n) = " + gen_sol
        bound = gen_sol[:-2].split("+")
        bound = [b.strip() for b in bound] #if b isn't complex number
        _, bound, _ = bound[-1].split(' ')
        return gen_sol[:-2], "T(n) = " + bound

    def __eq__(self, other):
        """
        T(n) = T(n-1)+T(n-1)+1 with T(n) = 2T(n-1)+1 is not handled properly
        solution: implement a simplify method
        """
        if isinstance(other, Div_and_conquer_recurrence):
            #shallow copy don't affect the object atribute values
            other_terms = copy.copy(other.get_rec_terms())
            self_terms = copy.copy(self.get_rec_terms())
            if not(self.rhs==other.rhs and len(self_terms)==len(other_terms)):
                return False

            for i in range(len(self_terms)):
                t = self_terms[i]
                if not(t in other_terms):
                    return False
                other_terms.remove(t)
                #remove the term so you don't compare to it
            return True
        else:
            return False


    def get_simplified(self):
        """
        simplify a divide and conquer recurrence to master_theorem format
        T(n) = a T(n-b) + (n^k(logn)^p)
        """
        a = len(self.rec_terms)-1
        b = [x.get_coefs() for x in self.rec_terms[1:]]
        b = min([x[2] for x in b])
        terms = [self.rec_terms[0]]
        for i in range(a-1):
            rec = Rec_term(out_coef=-1, in_coef=1, cons=b)
            terms.append(rec)
        simplified = Linear_recurrence(terms, self.rhs)
        return simplified

    def __str__(self):
        res = ""
        type = list(self.rhs.keys())[0]
        value = list(self.rhs.values())[0]
        for t in self.rec_terms:
            res = res + str(t) + " "

        if type == "logarithmic":
            return res+" = n^{}logn".format(value)
        elif type == "polynomial":
            return res+" = n^{}".format(value)
        elif type == "exponential":
            return res+" = {}^n".format(value)
        elif type == "constant":
            return res+" = {}".format(value)
        else:
            assert(False), "rhs not recognized"

    # def recurrence(self):
    #
    #     if rec_call > 2:
    #         complexity = "{}^n".format(rec_call)
    #     elif a != 0 and b != 0:
    #         complexity = "2^n"
    #     elif a != 0 and b == 0:
    #         if p==0:
    #             complexity = "n^{}".format(k+1)
    #         else:
    #             complexity = "n^{}(logn)^{}".format(k+1, p)
    #     else:
    #         assert false, "failed to solve this recurrence relation"
    #     return complexity


#recursive terms or the recurrence
# out_coef T(in_coef * symbol + cons)
#
# T(n) - 2T(n-1) = 1
# tn = Rec_term(out_coef=1, in_coef=1, cons=0)
# rec1 = Rec_term(out_coef=-1, in_coef=1, cons=-1)
# # rec2 = Rec_term(out_coef=-2, in_coef=1, cons=-1)
# rhs = {"constant": 0}
# lin_rec = Linear_recurrence([tn, rec1], rhs)
# print("Recurrence ", lin_rec)
# print(lin_rec.solve())
#
# # T(n) - T(n-1) - T(n-2) = 1
# rec0 = Rec_term(out_coef=1, in_coef=1, cons=0)
# rec1 = Rec_term(out_coef=-1, in_coef=1, cons=-1)
# rec2 = Rec_term(out_coef=-1, in_coef=1, cons=-2)
# rhs = {"constant": 1}
# lin_rec = Linear_recurrence([rec0, rec1, rec2], rhs)
# print("Recurrence ", lin_rec)
# print(lin_rec.solve())
#
# # T(n) - T(n-1) - T(n-2) = n
# rec0 = Rec_term(out_coef=1, in_coef=1, cons=0)
# rec1 = Rec_term(out_coef=-1, in_coef=1, cons=-1)
# rec2 = Rec_term(out_coef=-1, in_coef=1, cons=-2)
# rhs = {"polynomial": 1}
# lin_rec = Linear_recurrence([rec0, rec1, rec2], rhs)
# print("Recurrence ", lin_rec)
# print(lin_rec.solve())
# #
# T(n) - 3T(n-1) = n
# rec0 = Rec_term(out_coef=1, in_coef=1, cons=0)
# rec1 = Rec_term(out_coef=-1, in_coef=1, cons=-126)
# rhs = {"constant": 1}
# lin_rec = Linear_recurrence([rec0, rec1], rhs)
# print("Recurrence ", lin_rec)
# print(lin_rec.solve())
# #
# # T(n) - 2T(n-2) + 3T(n-1) = 1
# rec0 = Rec_term(out_coef=1, in_coef=1, cons=0)
# rec1 = Rec_term(out_coef=-2, in_coef=1, cons=-2)
# rec2 = Rec_term(out_coef=-3, in_coef=1, cons=-1)
# rhs = {"constant": 1}
# lin_rec = Linear_recurrence([rec0, rec1, rec2], rhs)
# print("Recurrence ", lin_rec)
# print(lin_rec.solve())
#

#
# # T(n) + 2T(n-2) + 2T(n-1) = 1
# rec0 = Rec_term(out_coef=1, in_coef=1, cons=0)
# rec1 = Rec_term(out_coef=-2, in_coef=1, cons=-1)
# rec2 = Rec_term(out_coef=-2, in_coef=1, cons=-2)
# # rec3 = Rec_term(out_coef=-2, in_coef=1, cons=-1)
# rhs = {"constant": 1}
# lin_rec = Linear_recurrence([rec0, rec1, rec2], rhs)
# print("Recurrence ", lin_rec)
# print(lin_rec.solve())




# rec0 = Rec_term(format == "divide_and_conquer", out_coef=1, in_coef=1, cons=0)
# rec1 = Rec_term(format == "divide_and_conquer", out_coef=-1, in_coef=1/2, cons=0)
# rec2 = Rec_term(format == "divide_and_conquer", out_coef=-1, in_coef=1/2, cons=0)
# rhs = {"polynomial": 1}
# lin_rec = Div_and_conquer_recurrence([rec0, rec1, rec2], rhs)
# recs = [lin_rec, lin_rec1]
# compare = lin_rec == lin_rec1
# print(lin_rec, " == ", lin_rec1, " is ", compare)
