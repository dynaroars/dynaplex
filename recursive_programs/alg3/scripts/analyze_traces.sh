#!/usr/bin/env bash
set -euo pipefail

NAME=$1
ADIR=res/
RES=$ADIR/$NAME
TDIR=traces/$NAME/

mkdir -p "$ADIR"

SEED=$(cat $TDIR/_seed)
printf "SEED=$SEED  " >> $RES

../../analyzer.py -trace $TDIR \
    | tee /dev/stderr \
    | grep "b'Complexity is " \
    | sed -n -e 's/^b'"'"'Complexity is \(.*\)\\n'"'"'$/\1/p' \
    >> $RES
