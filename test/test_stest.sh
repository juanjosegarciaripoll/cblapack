#!/bin/sh
(echo Testing REAL LAPACK linear equation routines; ./test_linsts < $CBLAPACKDIR/stest.in) | tee out/test_stest.out 2>&1
