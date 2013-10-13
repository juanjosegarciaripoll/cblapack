#!/bin/sh
echo GQR: Testing Generalized QR and RQ factorization routines
exec ./test_eigd < $CBLAPACKDIR/test/input/gqr.in
