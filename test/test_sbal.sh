#!/bin/sh
(echo SGEBAL: Testing the balancing of a REAL general matrix; ./test_eigs < $CBLAPACKDIR/sbal.in) | tee out/test_sbal.out 2>&1
