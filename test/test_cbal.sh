#!/bin/sh
(echo CGEBAL: Testing the balancing of a COMPLEX general matrix; ./test_eigc < $CBLAPACKDIR/cbal.in) | tee out/test_cbal.out 2>&1
