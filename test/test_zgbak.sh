#!/bin/sh
echo ZGGBAK: Testing the back transformation of a pair of COMPLEX16 balanced matrices
exec ./test_eigz < $CBLAPACKDIR/test/input/zgbak.in
