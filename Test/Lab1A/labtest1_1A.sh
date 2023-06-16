#!/bin/bash

read  -p "Put input a position: " p

if [[ $p -le $# ]]; then
    echo ${!p}
else
    echo NULL
fi
