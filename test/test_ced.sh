#!/bin/sh
echo CES: Testing COMPLEX Nonsymmetric Schur Form Driver
exec ./test_eigc < $CBLAPACKDIR/test/input/ced.in
