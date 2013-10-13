#!/bin/sh
echo Testing REAL LAPACK linear equation routines
exec ./test_lins < $CBLAPACKDIR/test/input/stest.in
