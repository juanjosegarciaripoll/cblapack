#!/bin/sh
echo SSG: Testing REAL Symmetric Generalized Eigenvalue Problem routines
exec ./test_eigs < $CBLAPACKDIR/test/input/ssg.in
