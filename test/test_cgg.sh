#!/bin/sh
(echo CGG: Testing COMPLEX Nonsymmetric Generalized Eigenvalue Problem routines; ./test_eigc < $CBLAPACKDIR/cgg.in) | tee out/test_cgg.out 2>&1
