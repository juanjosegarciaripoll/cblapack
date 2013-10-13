#!/bin/sh
(echo SGGBAK: Testing the back transformation of a pair of REAL balanced matrices; ./test_eigs < $CBLAPACKDIR/sgbak.in) | tee out/test_sgbak.out 2>&1
