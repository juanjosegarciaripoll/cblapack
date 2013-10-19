#!/bin/sh
for i in *.c; do
  sed -e 's,xerbla_,this_xerbla_,g' $i > foo.c && mv foo.c $i
done
../../scripts/remove_externs.sh *.c
