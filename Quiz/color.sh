#!/bin/bash

echo "choose color from R, G, B"
read color

if [ $color == R ]
then
	echo "You like Red"
elif [$color == B]
then 
	echo "You like Blue"
else
	echo "Do you like Green?"
fi
