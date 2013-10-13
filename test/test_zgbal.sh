#!/bin/sh
echo ZGGBAL: Testing the balancing of a pair of COMPLEX general matrices
exec ./test_eigz < $CBLAPACKDIR/test/input/zgbal.in
