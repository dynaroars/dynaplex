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

SUDO=
HAS_HW=0
if [[ ${KSH_HW:-} == 1 ]]; then
    SUDO='sudo KSH_HW=1 '
    HAS_HW='1'
fi

GENINFO="gen_traces: name=$NAME seed=$SEED hw=$HAS_HW"
echo "$SEED" > $DIR/_seed
echo "$GENINFO" > $DIR/_opts
echo "$GENINFO"

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
    ${SUDO}"./${NAME}.exe" $v $SEED 1>$FOUT 2>>$FTRACE
done
