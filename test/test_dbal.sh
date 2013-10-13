#!/bin/sh
(echo DGEBAL: Testing the balancing of a DOUBLE PRECISION general matrix; ./test_eigd < $CBLAPACKDIR/dbal.in) | tee out/test_dbal.out 2>&1
