#!/bin/sh
echo DBB:  Testing banded Singular Value Decomposition routines
exec ./test_eigd < $CBLAPACKDIR/test/input/dbb.in
