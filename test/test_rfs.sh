#!/bin/sh
echo Testing REAL LAPACK RFP protoype linear equation routines
exec ./test_lin_rfs < $CBLAPACKDIR/test/input/stest_rfp.in
