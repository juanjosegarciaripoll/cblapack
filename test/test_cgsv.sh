#!/bin/sh
echo GSV: Testing Generalized Singular Value Decomposition routines
exec ./test_eigc < $CBLAPACKDIR/test/input/gsv.in
