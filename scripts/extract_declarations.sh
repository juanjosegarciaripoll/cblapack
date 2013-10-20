#!/bin/sh

for i in $*; do
  echo "/* $i */"
  sed -n -e '/^\(\/\*[A-Za-z0-9 	]*\*\/[ 	]*\)*[a-zA-Z].*([^}]*$/,/^{$/ {
		s/\/\* Subroutine \*\/ int /F2CSUB /g
		s/\/\* Complex \*\/ //g
		/^{/ d
		s/)/);\
/
		p
		}' $i
done