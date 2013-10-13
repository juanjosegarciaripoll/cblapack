#!/bin/sh
(echo Testing SINGLE-DOUBLE PRECISION LAPACK prototype linear equation routines; ./test_linstds < $CBLAPACKDIR/dstest.in) | tee out/test_dstest.out 2>&1
