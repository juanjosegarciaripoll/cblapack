#!/bin/sh
(echo GSV: Testing Generalized Singular Value Decomposition routines; ./test_eigc < $CBLAPACKDIR/gsv.in) | tee out/test_cgsv.out 2>&1
