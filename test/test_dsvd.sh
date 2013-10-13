#!/bin/sh
(echo SVD: Testing Singular Value Decomposition routines; ./test_eigd < $CBLAPACKDIR/svd.in) | tee out/test_dsvd.out 2>&1
