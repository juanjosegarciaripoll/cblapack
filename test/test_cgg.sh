#!/bin/sh
echo CGG: Testing COMPLEX Nonsymmetric Generalized Eigenvalue Problem routines
exec ./test_eigc < $CBLAPACKDIR/test/input/cgg.in
