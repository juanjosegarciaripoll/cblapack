#!/bin/sh
(echo DSB: Testing DOUBLE PRECISION Symmetric Eigenvalue Problem routines; ./test_eigd < $CBLAPACKDIR/dsb.in) | tee out/test_dsb.out 2>&1
