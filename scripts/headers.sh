#!/bin/sh

for i in $*; do
  echo
  echo "/* $i */"
  sed -n -e '
   /.*_(.*/,/{/ {
     s/\/\*.*\*\/[ ]*//
     s/)/);/
     s/^[a-z]/extern &/
     /{/q
     p
   }
  ' $i
done
