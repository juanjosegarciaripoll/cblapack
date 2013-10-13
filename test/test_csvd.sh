#!/bin/sh
(echo SVD: Testing Singular Value Decomposition routines; ./test_eigc < $CBLAPACKDIR/svd.in) | tee out/test_csvd.out 2>&1
