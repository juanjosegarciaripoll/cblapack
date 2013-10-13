#!/bin/sh
(echo GQR: Testing Generalized QR and RQ factorization routines; ./test_eigz < $CBLAPACKDIR/gqr.in) | tee out/test_zgqr.out 2>&1
