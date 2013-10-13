#!/bin/sh
(echo ZGGBAK: Testing the back transformation of a pair of COMPLEX16 balanced matrices; ./test_eigz < $CBLAPACKDIR/zgbak.in) | tee out/test_zgbak.out 2>&1
