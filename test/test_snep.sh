#!/bin/sh
(echo NEP: Testing Nonsymmetric Eigenvalue Problem routines; ./test_eigs < $CBLAPACKDIR/nep.in) | tee out/test_snep.out 2>&1
