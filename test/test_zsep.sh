#!/bin/sh
(echo SEP: Testing Symmetric Eigenvalue Problem routines; ./test_eigz < $CBLAPACKDIR/sep.in) | tee out/test_zsep.out 2>&1
