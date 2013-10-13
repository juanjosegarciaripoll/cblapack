#!/bin/sh
echo SGGBAK: Testing the back transformation of a pair of REAL balanced matrices
exec ./test_eigs < $CBLAPACKDIR/test/input/sgbak.in
