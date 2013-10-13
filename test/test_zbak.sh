#!/bin/sh
(echo ZGEBAK: Testing the back transformation of a COMPLEX16 balanced matrix; ./test_eigz < $CBLAPACKDIR/zbak.in) | tee out/test_zbak.out 2>&1
