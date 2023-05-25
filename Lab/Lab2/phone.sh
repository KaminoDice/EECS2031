#!/bin/bash
# Author: saikoro
# Student ID: 219256809 
# Login ID: saikoro

read -a fi_name -p "Enter the file name: "
read -a pat -p "Enter the pattern: "

grep -i "${pat}" ${fi_name}