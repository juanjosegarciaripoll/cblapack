#!/bin/sh
echo CGD: Testing COMPLEX Nonsymmetric Generalized Eigenvalue Problem driver routines
exec ./test_eigc < $CBLAPACKDIR/test/input/cgd.in
