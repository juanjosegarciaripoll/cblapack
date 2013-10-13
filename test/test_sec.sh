#!/bin/sh
echo SEC: Testing REAL Eigen Condition Routines
exec ./test_eigs < $CBLAPACKDIR/test/input/sec.in
