#!/bin/sh
echo SBB:  Testing banded Singular Value Decomposition routines
exec ./test_eigs < $CBLAPACKDIR/test/input/sbb.in
