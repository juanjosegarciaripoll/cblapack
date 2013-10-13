#!/bin/sh
echo SGGBAL: Testing the balancing of a pair of REAL general matrices
exec ./test_eigs < $CBLAPACKDIR/test/input/sgbal.in
