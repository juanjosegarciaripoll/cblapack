#!/bin/sh
echo DGEBAL: Testing the balancing of a DOUBLE PRECISION general matrix
exec ./test_eigd < $CBLAPACKDIR/test/input/dbal.in
