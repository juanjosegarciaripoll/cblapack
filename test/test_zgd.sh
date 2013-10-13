#!/bin/sh
echo ZGD: Testing COMPLEX16 Nonsymmetric Generalized Eigenvalue Problem driver routines
exec ./test_eigz < $CBLAPACKDIR/test/input/zgd.in
