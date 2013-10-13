#!/bin/sh
(echo SGEBAK: Testing the back transformation of a REAL balanced matrix; ./test_eigs < $CBLAPACKDIR/sbak.in) | tee out/test_sbak.out 2>&1
