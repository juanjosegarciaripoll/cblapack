#!/bin/sh
(echo GQR: Testing Generalized QR and RQ factorization routines; ./test_eigd < $CBLAPACKDIR/gqr.in) | tee out/test_dgqr.out 2>&1
