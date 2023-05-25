#!/bin/bash
# Author: saikoro
# Student ID: 219256809 
# Login ID: saikoro

if [ -d $1 ]; then
    echo "It is a directory."
    
    if [ -r $1 ]; then
        echo "It is readable."
    else
        echo "It is not readable."
    fi

    if [ -w $1 ]; then
        echo "It is writable."
    else
        echo "It is not writable."
    fi

    if [ -x $1  ]; then
        echo "It is executable."
    else
        echo "It is not executable."
    fi

elif [ -f $1 ]; then
    echo "It is a regular file."
    
    if [ -s $1 ]; then
        echo "It is not empty."
    else
        echo "It is empty."
    fi

        if [ -r $1 ]; then
        echo "It is readable."
    else
        echo "It is not readable."
    fi

    if [ -w $1 ]; then
        echo "It is writable."
    else
        echo "It is not writable."
    fi

    if [ -x $1  ]; then
        echo "It is executable."
    else
        echo "It is not executable."
    fi

else
    echo "The file or directory \"$1\" does not exist."
fi

