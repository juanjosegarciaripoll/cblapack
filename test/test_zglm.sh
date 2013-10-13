#!/bin/sh
(echo GLM: Testing Generalized Linear Regression Model routines; ./test_eigz < $CBLAPACKDIR/glm.in) | tee out/test_zglm.out 2>&1
