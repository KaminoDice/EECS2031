#!/bin/bash

BFILE="Books.txt"
CFILE="Courses.txt"

if [[ $1 == "-num" ]]; then
    co_num="$2"
    while IFS='!' read -r tit isbn aut1 aut2 cpnum; do
        if ( grep "$co_num" "$CFILE" | grep -q "!$isbn!" ); then
            echo "$tit: $aut1 $aut2 $cpnum"
        fi
    done < "$BFILE"
elif [[ $1 == "-nobook" ]]; then 
    declare -A option
    declare -A required
    while IFS='!' read -r co_num co_name isbn ro; do
        if [[ $ro == "O" ]]; then
            option[$co_num] = 1
        elif [[ $ro == "R" ]]; then
            required[$co_num] = 1
        fi
    done < "$CFILE"

    for co_num in "${option}"; do
        if !($co_num in $required); then 
            echo $co_num
        fi
    done
elif [[ $1 == "-toomuch" ]]; then
    while IFS='!' read -r co_num co_name isbn ro; do
        if [[ $ro == "R" ]]; then
            ct=$(grep -c "$co_num" "$CFILE")
            if  [[ $ct -gt 2 ]]; then
                echo "$co_name"
            fi
        fi
    done < "$CFILE"
fi
