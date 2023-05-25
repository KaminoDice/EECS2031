#!/bin/bash
# Author: saikoro
# Student ID: 219256809 
# Login ID: saikoro

file=$1
shift 1

for i in "$@"; do
    grep -i "$i" $file
done