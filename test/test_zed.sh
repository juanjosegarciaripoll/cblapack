#!/bin/sh
(echo ZES: Testing COMPLEX16 Nonsymmetric Schur Form Driver; ./test_eigz < $CBLAPACKDIR/zed.in) | tee out/test_zed.out 2>&1
