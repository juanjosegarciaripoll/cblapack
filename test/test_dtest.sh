#!/bin/sh
(echo Testing DOUBLE PRECISION LAPACK linear equation routines; ./test_linstd < $CBLAPACKDIR/dtest.in) | tee out/test_dtest.out 2>&1
