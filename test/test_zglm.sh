#!/bin/sh
echo GLM: Testing Generalized Linear Regression Model routines
exec ./test_eigz < $CBLAPACKDIR/test/input/glm.in
