#!/bin/sh
echo GLM: Testing Generalized Linear Regression Model routines
exec ./test_eigc < $CBLAPACKDIR/test/input/glm.in
