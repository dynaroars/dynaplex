#!/usr/bin/env bash
set -euo pipefail

N=5

rm -rf res/

for i in $(seq 1 $N); do
    GEN_SEED="ksh$i" ./scripts/gen_all.sh
    ./scripts/analyze_all.sh
done

for i in $(seq 1 $N); do
    GEN_SEED="ksh$i" TOTAL_OPS=1 ./scripts/gen_all.sh
    TOTAL_OPS=1 ./scripts/analyze_all.sh
done