#!/bin/sh
(echo ZEC: Testing COMPLEX16 Eigen Condition Routines; ./test_eigz < $CBLAPACKDIR/zec.in) | tee out/test_zec.out 2>&1
