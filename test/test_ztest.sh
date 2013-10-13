#!/bin/sh
(echo Testing COMPLEX16 LAPACK linear equation routines; ./test_linstz < $CBLAPACKDIR/ztest.in) | tee out/test_ztest.out 2>&1
