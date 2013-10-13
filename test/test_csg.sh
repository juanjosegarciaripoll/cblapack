#!/bin/sh
echo CSG: Testing Symmetric Generalized Eigenvalue Problem routines
exec ./test_eigc < $CBLAPACKDIR/test/input/csg.in
