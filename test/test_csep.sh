#!/bin/sh
echo SEP: Testing Symmetric Eigenvalue Problem routines
exec ./test_eigc < $CBLAPACKDIR/test/input/sep.in
