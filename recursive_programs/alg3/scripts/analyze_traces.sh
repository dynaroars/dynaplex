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
if [[ ${TOTAL_OPS:-} == 1 ]]; then

    (/usr/bin/time -f 'total_time: %e' \
    ../../dig.py -trace $TDIR/traces -maxdeg 5 -r 2>&1 | tee $AOUT) || true

    if grep "Polynomial relation:  " $AOUT; then
        complexity=$(grep "Polynomial relation:  " $AOUT | sed -n -e 's/^Polynomial relation:  \(.*\)$/\1/p')
    else
        complexity="error"
    fi
    formula="poly"

else

    OMP_NUM_THREADS=16 \
    /usr/bin/time -f 'total_time: %e' \
    ../../analyzer.py -trace $TDIR 2>&1 | tee $AOUT

    complexity=$(grep "b'Complexity is " $AOUT | sed -n -e 's/^b'"'"'Complexity is \(.*\)\\n'"'"'$/\1/p')
    formula=$(grep "T(n) = " $AOUT)

fi

time=$(grep "total_time: " $AOUT | sed -n -e 's/^total_time: \(.*\)$/\1/p')

echo -e "SEED=$SEED \t\t $complexity \t\t\t $formula \t\t $time" >> $RES