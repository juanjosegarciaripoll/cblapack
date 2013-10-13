#!/bin/sh
(echo DGD: Testing DOUBLE PRECISION Nonsymmetric Generalized Eigenvalue Problem driver routines; ./test_eigd < $CBLAPACKDIR/dgd.in) | tee out/test_dgd.out 2>&1
