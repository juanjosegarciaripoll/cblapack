#!/bin/sh
echo LSE: Testing Constrained Linear Least Squares routines
exec ./test_eigc < $CBLAPACKDIR/test/input/lse.in
