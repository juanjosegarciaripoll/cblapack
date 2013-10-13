#!/bin/sh
echo Testing COMPLEX16 LAPACK linear equation routines
exec ./test_linz < $CBLAPACKDIR/test/input/ztest.in
