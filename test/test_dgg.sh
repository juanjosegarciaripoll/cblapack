#!/bin/sh
(echo DGG: Testing DOUBLE PRECISION Nonsymmetric Generalized Eigenvalue Problem routines; ./test_eigd < $CBLAPACKDIR/dgg.in) | tee out/test_dgg.out 2>&1
