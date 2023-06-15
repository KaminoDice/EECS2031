#!/bin/bash

# Check if two arguments are provided
if [ $# -ne 2 ]; then
    echo "Error: Two integer arguments are required."
    exit 1
fi

# Extract the arguments
start=$1
end=$2

# Validate that the arguments are integers
re='^[0-9]+$'
if ! [[ $start =~ $re ]] || ! [[ $end =~ $re ]]; then
    echo "Error: Arguments must be integers."
    exit 1
fi

# Calculate the sum of the sequence
sum=0
for ((i = start; i <= end; i++)); do
    sum=$((sum + i))
done

# Print the sum
echo $sum