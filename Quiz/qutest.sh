#!/bin/bash

echo "case 1: Using \"\$*\":"
for a in "$*"; do
	echo $a;
done

echo -e "\n case 2: Using \$*:"
for a in $*; do
	echo $a;
done

echo -e "\n case 3: Using \"\$@\":"
for a in "$@"; do
	echo $a
done

echo -e "\n case 4: Using \$@:"
for a in $@; do
	echo $a
done


