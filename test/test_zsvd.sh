#!/bin/sh
echo SVD: Testing Singular Value Decomposition routines
exec ./test_eigz < $CBLAPACKDIR/test/input/svd.in
