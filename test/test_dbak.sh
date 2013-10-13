#!/bin/sh
echo DGEBAK:  Testing the back transformation of a DOUBLE PRECISION balanced matrix
exec ./test_eigd < $CBLAPACKDIR/test/input/dbak.in
