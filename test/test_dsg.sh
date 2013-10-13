#!/bin/sh
(echo DSG: Testing DOUBLE PRECISION Symmetric Generalized Eigenvalue Problem routines; ./test_eigd < $CBLAPACKDIR/dsg.in) | tee out/test_dsg.out 2>&1
