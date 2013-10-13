#!/bin/sh
(echo ZGEBAL: Testing the balancing of a COMPLEX16 general matrix; ./test_eigz < $CBLAPACKDIR/zbal.in) | tee out/test_zbal.out 2>&1
