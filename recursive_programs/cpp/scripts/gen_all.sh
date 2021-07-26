#!/usr/bin/env bash
set -euo pipefail

N=100
I64MAX=1000000000000000000

echo "GenAll - seed='${GEN_SEED:-}'"

./scripts/gen_traces.sh "mergetree_build" $N 1 500
./scripts/gen_traces.sh "mergetree_mem" $N 1 500
./scripts/gen_traces.sh "mergetree_query" $N 10 500
./scripts/gen_traces.sh "powbin" $N 0 500
./scripts/gen_traces.sh "pancakesort" $N 1 500
./scripts/gen_traces.sh "quickselect" $N 1 500
./scripts/gen_traces.sh "permutation_index" $N 1 500
./scripts/gen_traces.sh "permutation_gen" $N 1 20
./scripts/gen_traces.sh "tenary_012" $N 1 12
./scripts/gen_traces.sh "convexhull" $N 1 500
./scripts/gen_traces.sh "balanced_ternary" $N 0 500
