#!/bin/sh
(echo SVD: Testing Singular Value Decomposition routines; ./test_eigs < $CBLAPACKDIR/svd.in) | tee out/test_ssvd.out 2>&1
