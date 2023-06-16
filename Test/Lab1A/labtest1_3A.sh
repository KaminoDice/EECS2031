#!/bin/bash

n=$(( $(find .. -type f | wc -l) + $(find .. -type d | wc -l) ))
m=$(find .. -type f -executable | wc -l)


echo "The number of total files = $n"
echo "The number of executable files = $m"
