#!/bin/sh
echo GSV: Testing Generalized Singular Value Decomposition routines
exec ./test_eigd < $CBLAPACKDIR/test/input/gsv.in
