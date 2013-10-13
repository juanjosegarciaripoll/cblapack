#!/bin/sh
(echo Testing COMPLEX LAPACK RFP protoype linear equation routines; ./test_linstrfc < $CBLAPACKDIR/ctest_rfp.in) | tee out/test_ctest_rfp.out 2>&1
