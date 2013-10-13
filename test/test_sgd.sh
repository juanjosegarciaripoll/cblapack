#!/bin/sh
(echo SGD: Testing REAL Nonsymmetric Generalized Eigenvalue Problem driver routines; ./test_eigs < $CBLAPACKDIR/sgd.in) | tee out/test_sgd.out 2>&1
