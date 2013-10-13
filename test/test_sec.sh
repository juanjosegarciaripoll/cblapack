#!/bin/sh
(echo SEC: Testing REAL Eigen Condition Routines; ./test_eigs < $CBLAPACKDIR/sec.in) | tee out/test_sec.out 2>&1
