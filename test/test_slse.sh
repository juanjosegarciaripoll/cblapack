#!/bin/sh
(echo LSE: Testing Constrained Linear Least Squares routines; ./test_eigs < $CBLAPACKDIR/lse.in) | tee out/test_slse.out 2>&1
