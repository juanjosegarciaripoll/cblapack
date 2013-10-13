#!/bin/sh
(echo SVD: Testing Singular Value Decomposition routines; ./test_eigz < $CBLAPACKDIR/svd.in) | tee out/test_zsvd.out 2>&1
