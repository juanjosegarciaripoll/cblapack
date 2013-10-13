#!/bin/sh
(echo CSG: Testing Symmetric Generalized Eigenvalue Problem routines; ./test_eigc < $CBLAPACKDIR/csg.in) | tee out/test_csg.out 2>&1
