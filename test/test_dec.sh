#!/bin/sh
(echo DEC: Testing DOUBLE PRECISION Eigen Condition Routines; ./test_eigd < $CBLAPACKDIR/dec.in) | tee out/test_dec.out 2>&1
