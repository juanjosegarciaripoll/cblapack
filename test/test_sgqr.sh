#!/bin/sh
(echo GQR: Testing Generalized QR and RQ factorization routines; ./test_eigs < $CBLAPACKDIR/gqr.in) | tee out/test_sgqr.out 2>&1
