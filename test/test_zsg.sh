#!/bin/sh
(echo ZSG: Testing Symmetric Generalized Eigenvalue Problem routines; ./test_eigz < $CBLAPACKDIR/zsg.in) | tee out/test_zsg.out 2>&1
