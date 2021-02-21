#!/usr/bin/env bash
set -euo pipefail

./scripts/analyze_traces.sh "mergetree_build"
./scripts/analyze_traces.sh "mergetree_mem"
./scripts/analyze_traces.sh "powbin"
./scripts/analyze_traces.sh "pancakesort"
./scripts/analyze_traces.sh "quickselect"
./scripts/analyze_traces.sh "permutation_index"
./scripts/analyze_traces.sh "permutation_gen"
./scripts/analyze_traces.sh "tenary_012"
./scripts/analyze_traces.sh "convexhull"
