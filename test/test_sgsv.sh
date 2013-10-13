#!/bin/sh
echo GSV: Testing Generalized Singular Value Decomposition routines
exec ./test_eigs < $CBLAPACKDIR/test/input/gsv.in
