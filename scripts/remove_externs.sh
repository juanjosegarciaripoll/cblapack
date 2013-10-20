#!/bin/sh

for i in $*; do
    sed -e '/^[ 	]*extern[ ].*;$/d' \
	-e '/^[ 	]*extern[ ][^;]*$/,/.*;$/d' \
	$i > foo.c && mv foo.c $i
done
