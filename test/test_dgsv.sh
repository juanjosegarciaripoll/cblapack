#!/bin/sh
(echo GSV: Testing Generalized Singular Value Decomposition routines; ./test_eigd < $CBLAPACKDIR/gsv.in) | tee out/test_dgsv.out 2>&1
