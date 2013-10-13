#!/bin/sh
(echo GSV: Testing Generalized Singular Value Decomposition routines; ./test_eigs < $CBLAPACKDIR/gsv.in) | tee out/test_sgsv.out 2>&1
