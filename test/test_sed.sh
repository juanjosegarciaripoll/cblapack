#!/bin/sh
echo SEV: Testing REAL Nonsymmetric Eigenvalue Driver
exec ./test_eigs < $CBLAPACKDIR/test/input/sed.in
