#!/bin/sh
(echo ZGG: Testing COMPLEX16 Nonsymmetric Generalized Eigenvalue Problem routines; ./test_eigz < $CBLAPACKDIR/zgg.in) | tee out/test_zgg.out 2>&1
