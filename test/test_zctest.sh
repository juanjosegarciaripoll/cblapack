#!/bin/sh
(echo Testing COMPLEX-COMPLEX16 LAPACK protoype linear equation routines; ./test_linstzc < $CBLAPACKDIR/zctest.in) | tee out/test_zctest.out 2>&1
