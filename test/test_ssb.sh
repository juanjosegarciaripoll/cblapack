#!/bin/sh
echo SSB: Testing REAL Symmetric Eigenvalue Problem routines
exec ./test_eigs < $CBLAPACKDIR/test/input/ssb.in
