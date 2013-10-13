#!/bin/sh
(echo LSE: Testing Constrained Linear Least Squares routines; ./test_eigz < $CBLAPACKDIR/lse.in) | tee out/test_zlse.out 2>&1
