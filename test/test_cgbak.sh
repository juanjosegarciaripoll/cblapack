#!/bin/sh
(echo CGGBAK: Testing the back transformation of a pair of COMPLEX balanced matrices; ./test_eigc < $CBLAPACKDIR/cgbak.in) | tee out/test_cgbak.out 2>&1
