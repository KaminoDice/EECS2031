#!/bin/bash
# Author: saikoro
# Student ID: 219256809 
# Login ID: saikoro

for i in "$@"; do
    if [ -f $i ] || [ -d $i ] ; then
        chmod a+r $i
        echo "File \"$i\" now readable by everyone"
        ls -l $i
    else
        echo "File \"$i\" does not exist."
    fi
done