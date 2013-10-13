#!/bin/sh
(echo NEP: Testing Nonsymmetric Eigenvalue Problem routines; ./test_eigd < $CBLAPACKDIR/nep.in) | tee out/test_dnep.out 2>&1
