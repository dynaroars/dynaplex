#!/usr/bin/env bash
set -euo pipefail

NAME=$1
N=$2
FROM=$3
TO=$4

SEED=${GEN_SEED:-ksh04061999}

DIR="traces_${NAME}/"
mkdir -p $DIR

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
    "./${NAME}.exe" $v $SEED 1>$FOUT 2>>$FTRACE
done
