#!/usr/bin/env bash
set -euo pipefail

N=5

for i in $(seq 1 $N); do
	./test.sh
done
