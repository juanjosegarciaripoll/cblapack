#!/bin/sh
echo GSV: Testing Generalized Singular Value Decomposition routines
exec ./test_eigz < $CBLAPACKDIR/test/input/gsv.in
