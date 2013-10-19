#!/bin/sh

which=$1
shift
echo Removing declaration for $which
for i in $*; do
  sed -e '/[ 	]*extern[^(]*[ 	]'$which'([^(]*);/d' $i > foo.c && \
  mv foo.c $i
done
exit
