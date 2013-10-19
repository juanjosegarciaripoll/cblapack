#!/bin/sh

for i in $*; do
  sed -n -e '/^\(\/\*[A-Za-z0-9 	]*\*\/[ 	]*\)*[a-z].*([^}]*$/,/^{$/ {
		s/^\(\/\*[A-Za-z0-9 	]*\*\/[ 	]*\)*[a-z]/extern &/
		/^{/ d
		s/)/);/
		p
		}' $i
done