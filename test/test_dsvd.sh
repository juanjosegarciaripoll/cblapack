#!/bin/sh
echo SVD: Testing Singular Value Decomposition routines
exec ./test_eigd < $CBLAPACKDIR/test/input/svd.in
