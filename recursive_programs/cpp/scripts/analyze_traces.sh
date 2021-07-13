#!/usr/bin/env bash
set -euo pipefail

NAME=$1
ADIR=res/
RES=$ADIR/$NAME
AOUT=$ADIR/analyzer_out
TDIR=traces/$NAME/

mkdir -p "$ADIR"

SEED=$(cat $TDIR/_seed)
OPTS=$(cat $TDIR/_opts)

echo "### Analyze $TDIR"

OMP_NUM_THREADS=16 \
time -f 'total_time: %e' \
python3 -W ignore ../../analyzer.py -trace $TDIR 2>&1 | tee $AOUT

complexity=$(grep "b'Complexity is " $AOUT | sed -n -e 's/^b'"'"'Complexity is \(.*\)\\n'"'"'$/\1/p')
formula=$(grep "T(n) = " $AOUT)



time=$(grep "total_time: " $AOUT | sed -n -e 's/^total_time: \(.*\)$/\1/p')

echo -e "SEED=$SEED \t\t $complexity \t\t\t $formula \t\t $time" >> $RES
