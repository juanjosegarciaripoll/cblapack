#!/bin/sh
(echo Testing COMPLEX LAPACK linear equation routines; ./test_linstc < $CBLAPACKDIR/ctest.in) | tee out/test_ctest.out 2>&1
