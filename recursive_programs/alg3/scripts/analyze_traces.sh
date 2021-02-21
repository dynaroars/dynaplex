#!/usr/bin/env bash
set -euo pipefail

NAME=$1
ADIR=res/
RES=$ADIR/$NAME
AOUT=$ADIR/analyzer_out
TDIR=traces/$NAME/

mkdir -p "$ADIR"


../../analyzer.py -trace $TDIR 2>&1 | tee $AOUT

SEED=$(cat $TDIR/_seed)
printf "SEED=$SEED\t " >> $RES
cat $AOUT \
    | grep "b'Complexity is " \
    | sed -n -e 's/^b'"'"'Complexity is \(.*\)\\n'"'"'$/\1/p' \
    >> $RES

printf "SEED=$SEED\t " >> $RES
cat $AOUT \
    | grep "T(n) = " \
    >> $RES