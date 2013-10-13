#!/bin/sh
(echo SEP: Testing Symmetric Eigenvalue Problem routines; ./test_eigd < $CBLAPACKDIR/sep.in) | tee out/test_dsep.out 2>&1
