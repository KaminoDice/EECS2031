#!/bin/bash

PSWORD="eecs2031"

echo -n "Enter the password: "
read input

if [ "${input,,}" = "${PSWORD,,}" ]; then
	echo "Authentication successful"
else
	echo "Authentication failed"	
fi
