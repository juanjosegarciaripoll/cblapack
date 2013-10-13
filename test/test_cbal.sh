#!/bin/sh
echo CGEBAL: Testing the balancing of a COMPLEX general matrix
exec ./test_eigc < $CBLAPACKDIR/test/input/cbal.in
