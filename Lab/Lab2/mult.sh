#!/bin/bash
# Author: saikoro
# Student ID: 219256809 
# Login ID: saikoro

i=1

while [ $i -le 10 ]; do
    ((ans = ${1}*${i}))
    echo "$1 x $i = $ans"
    ((i++))
done