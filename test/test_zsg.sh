#!/bin/sh
echo ZSG: Testing Symmetric Generalized Eigenvalue Problem routines
exec ./test_eigz < $CBLAPACKDIR/test/input/zsg.in
