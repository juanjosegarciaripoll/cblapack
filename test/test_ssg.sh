#!/bin/sh
(echo SSG: Testing REAL Symmetric Generalized Eigenvalue Problem routines; ./test_eigs < $CBLAPACKDIR/ssg.in) | tee out/test_ssg.out 2>&1
