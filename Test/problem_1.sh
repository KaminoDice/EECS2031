#!/bin/bash

# Read the input from standard input
read -r input

# Split the input into an array of words
IFS=' ' read -r -a args <<< "$input"

# Check the format of the input and perform the corresponding operation
if [[ "${args[1]}" == "+" ]]; then
  result=$(( ${args[0]} + ${args[2]} ))
elif [[ "${args[1]}" == "-" ]]; then
  result=$(( ${args[0]} - ${args[2]} ))
elif [[ "${args[1]}" == "*" ]]; then
  result=$(( ${args[0]} * ${args[2]} ))
elif [[ "${args[1]}" == "/" ]]; then
  result=$(( ${args[0]} / ${args[2]} ))
elif [[ "${args[0]}" == "min" ]]; then
  result=$(( ${args[1]} < ${args[2]} ? ${args[1]} : ${args[2]} ))
elif [[ "${args[0]}" == "max" ]]; then
  result=$(( ${args[1]} > ${args[2]} ? ${args[1]} : ${args[2]} ))
fi

# Display the result
echo "$result"