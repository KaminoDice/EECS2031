#!/bin/bash
# Author: saikoro
# Student ID: 219256809 
# Login ID: saikoro

n_1=$1
n_2=$3
op=$2

if [[ $op == *"x"* ]]; then
    ((ans = ${n_1}*${n_2}))
else
    ((ans = ${n_1}${op}${n_2}))
fi

echo "$ans"