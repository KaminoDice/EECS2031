#!/bin/bash

flag="$1"
parameter="$2"

if [ "$flag" == "-s" ]; then
    # Search for student by ID
    found=0
    while IFS=$'\t' read -r name id courses gpa; do
        if [ "$id" == "$parameter" ]; then
            echo "$name"
            echo "$courses"
            found=1
            break
        fi
    done < course_DB.txt

    if [ "$found" -eq 0 ]; then
        echo "No such ID"
    fi

elif [ "$flag" == "-m" ]; then
    # Search for students with more than 3 courses and GPA < 6.0
    while IFS=$'\t' read -r name id courses gpa; do
        course_count=$(echo "$courses" | tr ' ' '\n' | wc -l)
        if (( course_count > 3 )) && (( $(bc <<< "$gpa < 6.0") == 1 )); then
            echo "$name $id"
        fi
    done < course_DB.txt

elif [ "$flag" == "-c" ]; then
    # Search for students with GPA less than cutoff
    cutoff="$parameter"
    while IFS=$'\t' read -r name id courses gpa; do
        if (( $(bc <<< "$gpa < $cutoff") == 1 )); then
            echo "$name"
        fi
    done < course_DB.txt

else
    echo "Invalid flag. Usage: problem_3.sh flag optional_parameters"
fi