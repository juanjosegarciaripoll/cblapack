#!/bin/sh
(echo GLM: Testing Generalized Linear Regression Model routines; ./test_eigs < $CBLAPACKDIR/glm.in) | tee out/test_sglm.out 2>&1
