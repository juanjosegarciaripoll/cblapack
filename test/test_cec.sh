#!/bin/sh
(echo CEC: Testing COMPLEX Eigen Condition Routines; ./test_eigc < $CBLAPACKDIR/cec.in) | tee out/test_cec.out 2>&1
