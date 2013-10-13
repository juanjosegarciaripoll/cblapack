#!/bin/sh
(echo DBB:  Testing banded Singular Value Decomposition routines; ./test_eigd < $CBLAPACKDIR/dbb.in) | tee out/test_dbb.out 2>&1
