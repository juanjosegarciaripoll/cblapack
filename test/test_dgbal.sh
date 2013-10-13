#!/bin/sh
echo DGGBAL: Testing the balancing of a pair of DOUBLE PRECISION general matrices
exec ./test_eigd < $CBLAPACKDIR/test/input/dgbal.in
