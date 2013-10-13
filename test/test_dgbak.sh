#!/bin/sh
echo DGGBAK: Testing the back transformation of a pair of DOUBLE PRECISION balanced matrices
exec ./test_eigd < $CBLAPACKDIR/test/input/dgbak.in
