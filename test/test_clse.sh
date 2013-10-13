#!/bin/sh
(echo LSE: Testing Constrained Linear Least Squares routines; ./test_eigc < $CBLAPACKDIR/lse.in) | tee out/test_clse.out 2>&1
