#!/bin/bash

read b
read c

while true; do
    read a
    if [ $a -gt $((b+c)) ]; then
        echo "$a is greater than $b + $c"
        break
    fi

    b=$c
    c=$a
done