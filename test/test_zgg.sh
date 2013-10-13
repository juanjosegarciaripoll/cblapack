#!/bin/sh
echo ZGG: Testing COMPLEX16 Nonsymmetric Generalized Eigenvalue Problem routines
exec ./test_eigz < $CBLAPACKDIR/test/input/zgg.in
