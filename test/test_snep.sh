#!/bin/sh
echo NEP: Testing Nonsymmetric Eigenvalue Problem routines
exec ./test_eigs < $CBLAPACKDIR/test/input/nep.in
