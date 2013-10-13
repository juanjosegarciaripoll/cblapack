#!/bin/sh
(echo SGG: Testing REAL Nonsymmetric Generalized Eigenvalue Problem routines; ./test_eigs < $CBLAPACKDIR/sgg.in) | tee out/test_sgg.out 2>&1
