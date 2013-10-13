#!/bin/sh
echo CBB:  Testing banded Singular Value Decomposition routines
exec ./test_eigc < $CBLAPACKDIR/test/input/cbb.in
