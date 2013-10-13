#!/bin/sh
echo SGD: Testing REAL Nonsymmetric Generalized Eigenvalue Problem driver routines
exec ./test_eigs < $CBLAPACKDIR/test/input/sgd.in
