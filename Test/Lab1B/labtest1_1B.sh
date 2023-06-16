#!/bin/bash

read str
p=1

for i in $* ; do
    if [[ $str = $i ]]; then
        echo $p
        break
    fi
    
    if (( p == $#)); then
        echo NULL
    fi

    ((p++))
done