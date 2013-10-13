#!/bin/sh
(echo Testing REAL LAPACK RFP protoype linear equation routines; ./test_linstrfs < $CBLAPACKDIR/stest_rfp.in) | tee out/test_zctest.out 2>&1
