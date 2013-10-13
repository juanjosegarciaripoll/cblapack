#!/bin/sh
echo SEP: Testing Symmetric Eigenvalue Problem routines
exec ./test_eigd < $CBLAPACKDIR/test/input/sep.in
