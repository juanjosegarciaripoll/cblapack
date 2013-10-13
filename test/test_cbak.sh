#!/bin/sh
(echo CGEBAK: Testing the back transformation of a COMPLEX balanced matrix; ./test_eigc < $CBLAPACKDIR/cbak.in) | tee out/test_cbak.out 2>&1
