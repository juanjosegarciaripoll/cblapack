#!/bin/sh
echo SGG: Testing REAL Nonsymmetric Generalized Eigenvalue Problem routines
exec ./test_eigs < $CBLAPACKDIR/test/input/sgg.in
