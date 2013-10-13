#!/bin/sh
(echo GLM: Testing Generalized Linear Regression Model routines; ./test_eigd < $CBLAPACKDIR/glm.in) | tee out/test_dglm.out 2>&1
