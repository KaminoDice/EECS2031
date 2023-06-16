#!/bin/bash

# Read the threshold and tolerance from the standard input
read -p "Enter the threshold: " threshold
read -p "Enter the tolerance: " tolerance

# Calculate the lower and upper bounds
lower_bound=$((threshold - tolerance))
upper_bound=$((threshold + tolerance))

echo "lower_bound: $lower_bound"
echo "upper_bound: $upper_bound"

# Read the records from the file (assuming the file is named "records.txt")
while IFS=$'\t\n' read -r product_name product_id inventory; do
  if ((inventory >= lower_bound && inventory <= upper_bound)); then
    echo "product_name: $product_name: product_id: $product_id"
  fi
done < "records.txt"
