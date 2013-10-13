#!/bin/sh
echo CGGBAK: Testing the back transformation of a pair of COMPLEX balanced matrices
exec ./test_eigc < $CBLAPACKDIR/test/input/cgbak.in
