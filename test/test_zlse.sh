#!/bin/sh
echo LSE: Testing Constrained Linear Least Squares routines
exec ./test_eigz < $CBLAPACKDIR/test/input/lse.in
