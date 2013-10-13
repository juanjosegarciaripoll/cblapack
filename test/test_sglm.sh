#!/bin/sh
echo GLM: Testing Generalized Linear Regression Model routines
exec ./test_eigs < $CBLAPACKDIR/test/input/glm.in
