#!/bin/sh
echo NEP: Testing Nonsymmetric Eigenvalue Problem routines
exec ./test_eigc < $CBLAPACKDIR/test/input/nep.in
