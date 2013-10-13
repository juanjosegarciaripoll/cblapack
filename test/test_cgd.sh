#!/bin/sh
(echo CGD: Testing COMPLEX Nonsymmetric Generalized Eigenvalue Problem driver routines; ./test_eigc < $CBLAPACKDIR/cgd.in) | tee out/test_cgd.out 2>&1
