#!/bin/sh
echo SGEBAL: Testing the balancing of a REAL general matrix
exec ./test_eigs < $CBLAPACKDIR/test/input/sbal.in
