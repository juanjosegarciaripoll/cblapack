#!/bin/sh
echo Testing DOUBLE PRECISION LAPACK RFP protoype linear equation routines
exec ./test_lin_rfd < $CBLAPACKDIR/test/input/dtest_rfp.in
