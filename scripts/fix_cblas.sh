#!/bin/sh

for i in $*; do
  sed -e 's,\([^a-z0-9_]\)int\([^a-z0-9_]\),\1integer\2,g' $i > foo.c && \
  mv foo.c $i
done
exit

for i in $*; do
  sed -e 's,cblas_f77,blaswrap,' $i |
  sed -e '/#ifdef F77_INT/,/#endif/ {
		/#ifdef/,/#else/d
		/#endif/d
	  }' |
  sed -e 's,\([ 	]*\)F77_\([a-z0-9_]*\)[ 	]*(,\1\2_(,g' > foo.c && \
  mv foo.c $i
done
