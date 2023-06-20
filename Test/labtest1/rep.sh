#!/bin/bash

n=0
while IFS=' \n' read -r -a line ; do
	for i in ${line[*]}; do
		[[ $i =~ eecs2031[AB] ]] && ((n++))
       done
done < "eecs.txt"

sed -e "s\eecs2031[AB]\eecs2031\g" eecs.txt
echo -e "$n"
