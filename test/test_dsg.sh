#!/bin/sh
echo DSG: Testing DOUBLE PRECISION Symmetric Generalized Eigenvalue Problem routines
exec ./test_eigd < $CBLAPACKDIR/test/input/dsg.in
