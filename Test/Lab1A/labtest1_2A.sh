#!/bin/bash

read -p "Please input an integer less than 20: " n

sq=$((n * n))

if ((sq % 2== 0 )); then
    echo "$sq"
else
    echo "$n square is not even"
fi