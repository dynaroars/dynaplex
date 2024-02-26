# CPP subject programs

## Requirements

- OS: Ubuntu 20.04
- Software: `sudo apt install build-essential time`

## Build
To build the CPP programs, run `make -j4`.

## Run test program

To collect traces for a program, run
```bash
./scripts/gen_traces.sh "mergetree_build" 100 1 500
```
The script above runs `mergetree_build.cpp` program 100 times, with input size randomly chosen from 1 to 500). The output traces is stored in folder `traces/mergetree_build/`.

To analyze the traces, run
```bash
./scripts/analyze_traces.sh "mergetree_build"
```
```python
### Analyze traces/mergetree_build/
../../analyzer.py:194: VisibleDeprecationWarning: Creating an ndarray from ragged nested sequences (which is a list-or-tuple of lists-or-tuples-or ndarrays with different lengths or shapes) is deprecated. If you meant to do this, you must specify 'dtype=object' when creating the ndarray.
  data = np.array([x, coefs])
diff 2.0 coef 1.75193661163859
T(n/2)
diff 4.0 coef 2.1473058387514747
T(n/2)
Computing polynomial relations
Command:  /mnt/host/recurrence/complexity-recurrence.git/dig.py -trace traces/mergetree_build//traces -maxdeg 5 -r 
b'models before applying heuristics
 
2686
 
11.28 x - 244.4
          2
0.003246 x + 9.649 x - 108.1
            3            2
-7.775e-06 x + 0.009249 x + 8.391 x - 52.11
           4             3           2
4.108e-09 x - 1.201e-05 x + 0.01067 x + 8.22 x - 46.99
            5             4             3           2
-7.065e-11 x + 9.455e-08 x - 5.354e-05 x + 0.01885 x + 7.581 x - 33.15
Models after applying Heuristics  [poly1d([2685.52]), poly1d([  11.27642796, -244.4342771 ]), poly1d([ 3.24572737e-03,  9.64858686e+00, -1.08067810e+02])]
r2_scores  [-38.930341820247456, 0.969681083326412, 0.9971878890541829]
log:  
1 x - 1.4e-14, r2_score -189.50841454922175
-189.50841454922175
Analysis complete in 0.0026857852935791016 seconds
Polynomial relation:  n^2
k=2 p=0
'
T(n) = T(n/2) +  T(n/2) +  (n^2(logn)^0)
Solving the recurrence relation
Analysis complete in 0.982 seconds
b'Complexity is O(n^2 (logn)^0)\n'
total_time: 1.71
```

## Run all programs
The script
```bash
./scripts/bm.sh
```
runs each test 5 times (with 5 different seeds) and collect the results into the folder `res`. E.g.,
```bash
cat res/quickselect
```
```
SEED=ksh1 		 O(n^1 (logn)^0) 			 T(n) = T(n/2) +  (n^1(logn)^0) 		 1.75
SEED=ksh2 		 O(n^1 (logn)^0) 			 T(n) = T(n/2) +  (n^1(logn)^0) 		 1.65
SEED=ksh3 		 O(n^1 (logn)^0) 			 T(n) = T(n/2) +  (n^1(logn)^0) 		 1.65
SEED=ksh4 		 O(n^1 (logn)^0) 			 T(n) = T(n/2) +  (n^1(logn)^0) 		 1.66
SEED=ksh5 		 O(n^1 (logn)^0) 			 T(n) = T(n/2) +  (n^1(logn)^0) 		 1.68
SEED=ksh1 		 O(n^1) 			 poly 		 0.86
SEED=ksh2 		 O(log n) 			 poly 		 0.75
SEED=ksh3 		 O(n^2) 			 poly 		 0.75
SEED=ksh4 		 O(n^1) 			 poly 		 0.83
SEED=ksh5 		 O(log n) 			 poly 		 0.76
```
The first 5 lines is the result using the main recurrence algorithm (lists the inferred complexity and inferred recurrence formula).
The last 5 lines is the result using only the polynomial algorithm.