#!/bin/sh
echo SGEBAK: Testing the back transformation of a REAL balanced matrix
exec ./test_eigs < $CBLAPACKDIR/test/input/sbak.in
