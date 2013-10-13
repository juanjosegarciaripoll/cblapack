#!/bin/sh
(echo SEP: Testing Symmetric Eigenvalue Problem routines; ./test_eigs < $CBLAPACKDIR/sep.in) | tee out/test_ssep.out 2>&1
