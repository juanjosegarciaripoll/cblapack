#!/bin/sh
(echo CGGBAL: Testing the balancing of a pair of COMPLEX general matrices; ./test_eigc < $CBLAPACKDIR/cgbal.in) | tee out/test_cgbal.out 2>&1
