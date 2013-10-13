#!/bin/sh
echo Testing COMPLEX16 LAPACK RFP protoype linear equation routines
exec ./test_lin_rfz < $CBLAPACKDIR/test/input/ztest_rfp.in
