#!/bin/sh
echo DGG: Testing DOUBLE PRECISION Nonsymmetric Generalized Eigenvalue Problem routines
exec ./test_eigd < $CBLAPACKDIR/test/input/dgg.in
