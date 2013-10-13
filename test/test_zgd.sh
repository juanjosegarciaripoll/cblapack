#!/bin/sh
(echo ZGD: Testing COMPLEX16 Nonsymmetric Generalized Eigenvalue Problem driver routines; ./test_eigz < $CBLAPACKDIR/zgd.in) | tee out/test_zgd.out 2>&1
