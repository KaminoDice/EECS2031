#!/bin/bash
# Author: saikoro
# Student ID: 219256809 
# Login ID: saikoro

if [[ $1 == *"read"* ]]; then
    p=a+r
    pn=readable
elif [[ $1 == *"write"* ]]; then
    p=a+w
    pn=writable
elif [[ $1 == *"execute"* ]]; then
    p=a+x
    pn=executable
fi

shift 1
for i in "$@"; do
    chmod $p $i
    echo "File \"$i\" is now ${pn}able by all."
    ls -l $i
done