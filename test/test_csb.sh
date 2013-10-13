#!/bin/sh
echo CHB: Testing Hermitian Eigenvalue Problem routines
exec ./test_eigc < $CBLAPACKDIR/test/input/csb.in
