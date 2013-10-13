#!/bin/sh
echo DSB: Testing DOUBLE PRECISION Symmetric Eigenvalue Problem routines
exec ./test_eigd < $CBLAPACKDIR/test/input/dsb.in
