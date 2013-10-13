#!/bin/sh
(echo DGGBAK: Testing the back transformation of a pair of DOUBLE PRECISION balanced matrices; ./test_eigd < $CBLAPACKDIR/dgbak.in) | tee out/test_dgbak.out 2>&1
