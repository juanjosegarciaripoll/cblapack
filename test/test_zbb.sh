#!/bin/sh
echo ZBB: Testing banded Singular Value Decomposition routines
exec ./test_eigz < $CBLAPACKDIR/test/input/zbb.in
