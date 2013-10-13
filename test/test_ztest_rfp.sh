#!/bin/sh
(echo Testing COMPLEX16 LAPACK RFP protoype linear equation routines; ./test_linstrfz < $CBLAPACKDIR/ztest_rfp.in) | tee out/test_ztest_rfp.out 2>&1
