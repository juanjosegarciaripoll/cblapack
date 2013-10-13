#!/bin/sh
(echo DGGBAL: Testing the balancing of a pair of DOUBLE PRECISION general matrices; ./test_eigd < $CBLAPACKDIR/dgbal.in) | tee out/test_dgbal.out 2>&1
