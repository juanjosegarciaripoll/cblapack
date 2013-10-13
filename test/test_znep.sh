#!/bin/sh
(echo NEP: Testing Nonsymmetric Eigenvalue Problem routines; ./test_eigz < $CBLAPACKDIR/nep.in) | tee out/test_znep.out 2>&1
