#!/bin/sh
(echo SEP: Testing Symmetric Eigenvalue Problem routines; ./test_eigc < $CBLAPACKDIR/sep.in) | tee out/test_csep.out 2>&1
