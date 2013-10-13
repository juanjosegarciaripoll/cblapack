#!/bin/sh
echo ZES: Testing COMPLEX16 Nonsymmetric Schur Form Driver
exec ./test_eigz < $CBLAPACKDIR/test/input/zed.in
