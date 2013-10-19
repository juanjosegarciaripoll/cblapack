#!/bin/sh
for i in *.c; do
  sed -e 's,xerbla_,this_xerbla_,g' $i > foo.c && mv foo.c $i
  k=`basename $i .c`
  ../../scripts/extract_declarations.sh $i > ${k}.h
  ../../scripts/addheader.sh ${k}.h $i
done
../../scripts/remove_externs.sh *.c
