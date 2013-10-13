#!/bin/sh
(echo NEP: Testing Nonsymmetric Eigenvalue Problem routines; ./test_eigc < $CBLAPACKDIR/nep.in) | tee out/test_cnep.out 2>&1
