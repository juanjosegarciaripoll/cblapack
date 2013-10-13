#!/bin/sh
echo SVD: Testing Singular Value Decomposition routines
exec ./test_eigs < $CBLAPACKDIR/test/input/svd.in
