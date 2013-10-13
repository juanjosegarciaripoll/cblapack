#!/bin/sh
echo Testing SINGLE-DOUBLE PRECISION LAPACK prototype linear equation routines
exec ./test_linds < $CBLAPACKDIR/test/input/dstest.in
