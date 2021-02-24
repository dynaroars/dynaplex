#!/usr/bin/env bash
set -euo pipefail

NAME=$1
N=$2
FROM=$3
TO=$4

SEED=${GEN_SEED:-ksh040699}

DIR="traces/${NAME}/"
rm -rf $DIR
mkdir -p $DIR

OPTS=
if [[ $TOTAL_OPS == 1 ]]; then
    OPTS='--total-ops'
fi

echo "$SEED" > $DIR/_seed
echo "$OPTS" > $DIR/_opts

echo "GenTraces - $NAME - opts='$OPTS' seed='$SEED'"

if [[ ${GEN_SEQUENTIAL:-} == 1 ]]; then
    N=$((TO - FROM + 1))
    VALUES=$(seq 1 $N)
else
    VALUES=$(./rand.exe $FROM $TO $N $SEED)
fi

idx=0
for v in $VALUES; do
    FOUT="$DIR/output-$v"
    FTRACE="$DIR/traces"
    idx=$((idx + 1))

    echo "$NAME $idx v=$v"
    "./${NAME}.exe" $v $OPTS $SEED 1>$FOUT 2>>$FTRACE
done
