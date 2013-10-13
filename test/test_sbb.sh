#!/bin/sh
(echo SBB:  Testing banded Singular Value Decomposition routines; ./test_eigs < $CBLAPACKDIR/sbb.in) | tee out/test_sbb.out 2>&1
