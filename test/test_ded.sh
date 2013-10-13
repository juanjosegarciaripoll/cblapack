#!/bin/sh
(echo DEV: Testing DOUBLE PRECISION Nonsymmetric Eigenvalue Driver; ./test_eigd < $CBLAPACKDIR/ded.in) | tee out/test_ded.out 2>&1
