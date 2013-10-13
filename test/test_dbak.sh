#!/bin/sh
(echo DGEBAK:  Testing the back transformation of a DOUBLE PRECISION balanced matrix; ./test_eigd < $CBLAPACKDIR/dbak.in) | tee out/test_dbak.out 2>&1
