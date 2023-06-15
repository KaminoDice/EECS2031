#!/bin/bash

file="p2a.txt"

# Check if the file exists
if [ ! -f "$file" ]; then
    echo "Error: File $file does not exist."
    exit 1
fi

# Read the file line by line
while IFS=' ' read -r -a line; do
    # Check the number of integers in the line
    count=${#line[@]}
    if ((count == 4 || count == 5)); then
        # Extract the first, second, and third integers
        first=${line[0]}
        second=${line[1]}
        third=${line[2]}
        
        # Check if the first integer is greater than the sum of the second and third integers
        if ((first > second + third)); then
            echo "${line[@]}"
        fi
    fi
done < "$file"