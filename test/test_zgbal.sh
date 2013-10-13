#!/bin/sh
(echo ZGGBAL: Testing the balancing of a pair of COMPLEX general matrices; ./test_eigz < $CBLAPACKDIR/zgbal.in) | tee out/test_zgbal.out 2>&1
