#!/bin/sh
echo Testing DOUBLE PRECISION LAPACK linear equation routines
exec ./test_lind < $CBLAPACKDIR/test/input/dtest.in
