#!/bin/sh
echo DGD: Testing DOUBLE PRECISION Nonsymmetric Generalized Eigenvalue Problem driver routines
exec ./test_eigd < $CBLAPACKDIR/test/input/dgd.in
