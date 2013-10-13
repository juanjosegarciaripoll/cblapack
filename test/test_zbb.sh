#!/bin/sh
(echo ZBB: Testing banded Singular Value Decomposition routines; ./test_eigz < $CBLAPACKDIR/zbb.in) | tee out/test_zbb.out 2>&1
