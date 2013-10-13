#!/bin/sh
echo LSE: Testing Constrained Linear Least Squares routines
exec ./test_eigd < $CBLAPACKDIR/test/input/lse.in
