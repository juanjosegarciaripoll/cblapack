#!/bin/sh
header="$1"
shift
for i in $*; do
  sed -e 's/#include [<"]f2c.h[>"]/&\
#include "'$header'"/' $i > foo.c && mv foo.c $i
done
