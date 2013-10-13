#!/bin/sh
echo ZGEBAK: Testing the back transformation of a COMPLEX16 balanced matrix
exec ./test_eigz < $CBLAPACKDIR/test/input/zbak.in
