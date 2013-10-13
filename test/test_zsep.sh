#!/bin/sh
echo SEP: Testing Symmetric Eigenvalue Problem routines
exec ./test_eigz < $CBLAPACKDIR/test/input/sep.in
