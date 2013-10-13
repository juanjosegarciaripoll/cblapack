#!/bin/sh
(echo CBB:  Testing banded Singular Value Decomposition routines; ./test_eigc < $CBLAPACKDIR/cbb.in) | tee out/test_cbb.out 2>&1
