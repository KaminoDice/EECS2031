#!/bin/bash

file_name=$1

if [ ! -f "$file_name" ]; then
  echo "File '$file_name' does not exist."
  exit 1
fi

count=$(grep -cve '^\s*$' "$file_name")
echo "Number of non-empty lines in '$file_name': $count"
