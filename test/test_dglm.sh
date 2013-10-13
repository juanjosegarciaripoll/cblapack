#!/bin/sh
echo GLM: Testing Generalized Linear Regression Model routines
exec ./test_eigd < $CBLAPACKDIR/test/input/glm.in
