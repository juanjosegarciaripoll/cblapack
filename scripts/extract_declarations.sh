#!/bin/sh

for i in $*; do
  sed -n -e '/^\(\/\*[A-Za-z0-9 	]*\*\/[ 	]*\)*[a-z].*(.*/,/^{$/ {
		/^{/ d
		s/)/);/
		p
		}' $i
done