#!/bin/sh
(echo SEV: Testing REAL Nonsymmetric Eigenvalue Driver; ./test_eigs < $CBLAPACKDIR/sed.in) | tee out/test_sed.out 2>&1
