#!/usr/bin/env bash
set -euo pipefail

NAME=$1
N=$2
FROM=$3
TO=$4

DIR="traces_${NAME}/"
mkdir -p $DIR

for i in $(seq 1 $N); do
    v=$(./rand.exe $FROM $TO $i)
    FOUT="$DIR/output-$v"
    FTRACE="$DIR/traces"

    echo "$i   v=$v"
    "./${NAME}.exe" $v 1>$FOUT 2>>$FTRACE
done
