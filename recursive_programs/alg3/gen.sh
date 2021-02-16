#!/usr/bin/env bash
set -euo pipefail

N=100

./gen_traces.sh "mergetree_build" $N 1 1000
./gen_traces.sh "mergetree_mem" $N 1 1000
./gen_traces.sh "powbin" $N 0 1000000000000000000
./gen_traces.sh "pancakesort" $N 1 1000
./gen_traces.sh "quickselect" $N 1 1000
./gen_traces.sh "permutation_index" $N 1 100
GEN_SEQUENTIAL=1 ./gen_traces.sh "permutation_gen" _ 1 19
GEN_SEQUENTIAL=1 ./gen_traces.sh "tenary_012" _ 1 12
./gen_traces.sh "convexhull" $N 1 1000
