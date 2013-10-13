#!/bin/sh
echo CGGBAL: Testing the balancing of a pair of COMPLEX general matrices
exec ./test_eigc < $CBLAPACKDIR/test/input/cgbal.in
