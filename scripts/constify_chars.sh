#!/bin/sh

#
# Precedes 'char *' declarations in function starts with 'const'
#

for i in $*; do
    sed -e 's/\([(, 	]\)char \*/\1const char */g' $i > foo.c && \
    mv foo.c $i
done
