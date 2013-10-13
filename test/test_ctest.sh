#!/bin/sh
echo Testing COMPLEX LAPACK linear equation routines
exec ./test_linc < $CBLAPACKDIR/test/input/ctest.in
