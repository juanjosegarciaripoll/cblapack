#!/bin/sh
(echo SSB: Testing REAL Symmetric Eigenvalue Problem routines; ./test_eigs < $CBLAPACKDIR/ssb.in) | tee out/test_ssb.out 2>&1
