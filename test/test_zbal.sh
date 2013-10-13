#!/bin/sh
echo ZGEBAL: Testing the balancing of a COMPLEX16 general matrix
exec ./test_eigz < $CBLAPACKDIR/test/input/zbal.in
