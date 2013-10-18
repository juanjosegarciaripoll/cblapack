#!/bin/sh

#
# Removes comments with '..' and with lables such as
#	/*  .. Scalar Arguments .. */
#	/* L50: */
# It also removes empty lines
#

for i in $*; do
    sed -e '/^\/.*\.\..*\*\/$/d' \
	-e '/^\/\* L[0-9]*: \*\//d' $i | \
    sed '/^$/N;/^\n$/D' > foo.c && \
    mv foo.c $i
done
