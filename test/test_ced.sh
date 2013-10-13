#!/bin/sh
(echo CES: Testing COMPLEX Nonsymmetric Schur Form Driver; ./test_eigc < $CBLAPACKDIR/ced.in) | tee out/test_ced.out 2>&1
