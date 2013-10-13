#!/bin/sh
echo NEP: Testing Nonsymmetric Eigenvalue Problem routines
exec ./test_eigz < $CBLAPACKDIR/test/input/nep.in
