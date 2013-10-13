#!/bin/sh
echo NEP: Testing Nonsymmetric Eigenvalue Problem routines
exec ./test_eigd < $CBLAPACKDIR/test/input/nep.in
