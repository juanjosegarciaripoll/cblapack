#!/bin/sh
(echo GQR: Testing Generalized QR and RQ factorization routines; ./test_eigc < $CBLAPACKDIR/gqr.in) | tee out/test_cgqr.out 2>&1
