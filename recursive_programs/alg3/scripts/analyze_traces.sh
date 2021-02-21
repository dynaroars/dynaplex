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
complexity=$(grep "b'Complexity is " $AOUT | sed -n -e 's/^b'"'"'Complexity is \(.*\)\\n'"'"'$/\1/p')
formula=$(grep "T(n) = " $AOUT)

echo -e "SEED=$SEED \t\t $complexity \t\t\t $formula" >> $RES