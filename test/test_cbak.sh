#!/bin/sh
echo CGEBAK: Testing the back transformation of a COMPLEX balanced matrix
exec ./test_eigc < $CBLAPACKDIR/test/input/cbak.in
