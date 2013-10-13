#!/bin/sh
echo Testing COMPLEX LAPACK RFP protoype linear equation routines
exec ./test_lin_rfc < $CBLAPACKDIR/test/input/ctest_rfp.in
