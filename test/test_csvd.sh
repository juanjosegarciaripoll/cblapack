#!/bin/sh
echo SVD: Testing Singular Value Decomposition routines
exec ./test_eigc < $CBLAPACKDIR/test/input/svd.in
