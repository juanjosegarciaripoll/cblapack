#!/bin/sh
(echo LSE: Testing Constrained Linear Least Squares routines; ./test_eigd < $CBLAPACKDIR/lse.in) | tee out/test_dlse.out 2>&1
