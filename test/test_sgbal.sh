#!/bin/sh
(echo SGGBAL: Testing the balancing of a pair of REAL general matrices; ./test_eigs < $CBLAPACKDIR/sgbal.in) | tee out/test_sgbal.out 2>&1
