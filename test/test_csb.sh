#!/bin/sh
(echo CHB: Testing Hermitian Eigenvalue Problem routines; ./test_eigc < $CBLAPACKDIR/csb.in) | tee out/test_csb.out 2>&1
