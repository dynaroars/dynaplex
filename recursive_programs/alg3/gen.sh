#!/usr/bin/env bash
set -euo pipefail

N=100

./gen_traces.sh "mergetree_build" $N 10 1000

./gen_traces.sh "mergetree_mem" $N 10 1000