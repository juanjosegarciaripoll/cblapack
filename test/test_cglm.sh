#!/bin/sh
(echo GLM: Testing Generalized Linear Regression Model routines; ./test_eigc < $CBLAPACKDIR/glm.in) | tee out/test_cglm.out 2>&1
