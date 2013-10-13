#!/bin/sh
echo Testing COMPLEX-COMPLEX16 LAPACK protoype linear equation routines
exec ./test_linzc < $CBLAPACKDIR/test/input/zctest.in
