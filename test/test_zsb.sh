#!/bin/sh
(echo ZHB: Testing Hermitian Eigenvalue Problem routines; ./test_eigz < $CBLAPACKDIR/zsb.in) | tee out/test_zsb.out 2>&1
