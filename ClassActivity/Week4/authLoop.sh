#!/bin/bash

PSWORD="eecs2031"

echo -n "Enter the password: "
read input

until [ "${input,,}" = "${PSWORD,,}" ]; do
	echo "Authentication failed"
	echo -n "Enter the password: "
	read input	
done

echo "Authentication successful"
