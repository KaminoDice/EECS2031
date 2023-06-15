#!/bin/bash

for i in "$@"; do
	if [ -s $i ];then
		echo "File \"$i\" is not empty."
	else echo "File \"$i\" is empty."
	fi
done

