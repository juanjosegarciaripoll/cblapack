#!/bin/sh
echo GQR: Testing Generalized QR and RQ factorization routines
exec ./test_eigz < $CBLAPACKDIR/test/input/gqr.in
