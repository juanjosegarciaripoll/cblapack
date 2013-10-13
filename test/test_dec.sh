#!/bin/sh
echo DEC: Testing DOUBLE PRECISION Eigen Condition Routines
exec ./test_eigd < $CBLAPACKDIR/test/input/dec.in
