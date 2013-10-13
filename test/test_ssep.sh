#!/bin/sh
echo SEP: Testing Symmetric Eigenvalue Problem routines
exec ./test_eigs < $CBLAPACKDIR/test/input/sep.in
