#!/bin/sh
echo LSE: Testing Constrained Linear Least Squares routines
exec ./test_eigs < $CBLAPACKDIR/test/input/lse.in
