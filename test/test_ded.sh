#!/bin/sh
echo DEV: Testing DOUBLE PRECISION Nonsymmetric Eigenvalue Driver
exec ./test_eigd < $CBLAPACKDIR/test/input/ded.in
