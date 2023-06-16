#!/bin/bash
n=$1
m=$2

sqr=$((n*n+m*m))
rot=$(echo "scale=0; sqrt($sqr)" | bc)


((rot * rot == sqr)) && echo YES || echo NO