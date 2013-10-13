#!/bin/sh
(echo Testing DOUBLE PRECISION LAPACK RFP protoype linear equation routines; ./test_linstrfd < $CBLAPACKDIR/dtest_rfp.in) | tee out/test_dtest_rfp.out 2>&1
