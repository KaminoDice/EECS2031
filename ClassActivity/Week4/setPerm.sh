#!/bin/bash

if [[ "$1" == "iread" ]]; then
	echo "Read permission granted"
elif [[ "$1" == "iwrite" ]]; then
	echo "Write permission granted"
elif [[ "$1" == "iexecute" ]]; then
	echo "Execute permission granted"
else echo "Invalid parameter"
fi
