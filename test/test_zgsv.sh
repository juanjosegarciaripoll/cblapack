#!/bin/sh
(echo GSV: Testing Generalized Singular Value Decomposition routines; ./test_eigz < $CBLAPACKDIR/gsv.in) | tee out/test_zgsv.out 2>&1
