#!/bin/sh
echo ZHB: Testing Hermitian Eigenvalue Problem routines
exec ./test_eigz < $CBLAPACKDIR/test/input/zsb.in
