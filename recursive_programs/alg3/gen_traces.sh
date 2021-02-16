#!/usr/bin/env bash
set -euo pipefail

NAME=$1
N=$2
FROM=$3
TO=$4

DIR="traces_${NAME}/"
mkdir -p $DIR

if [[ ${GEN_SEQUENTIAL:-} == 1 ]]; then
    N=$((TO - FROM + 1))
fi

for i in $(seq 1 $N); do
    if [[ ${GEN_SEQUENTIAL:-} == 1 ]]; then
        v=$((FROM + i - 1))
    else
        v=$(./rand.exe $FROM $TO $i)
    fi
    FOUT="$DIR/output-$v"
    FTRACE="$DIR/traces"

    echo "$NAME  $i   v=$v"
    "./${NAME}.exe" $v 1>$FOUT 2>>$FTRACE
done
