#!/usr/bin/env bash
set -euo pipefail

N=100

./gen_traces.sh "mergetree_build" $N 1 500
./gen_traces.sh "mergetree_mem" $N 1 500
./gen_traces.sh "powbin" $N 0 1000000000000000000
./gen_traces.sh "pancakesort" $N 1 500
./gen_traces.sh "quickselect" $N 1 500
./gen_traces.sh "permutation_index" $N 1 500
./gen_traces.sh "permutation_gen" 10 1 20
./gen_traces.sh "tenary_012" 12 1 12
./gen_traces.sh "convexhull" $N 1 500
