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
    while IFS='!' read -r co_num co_name isbn ro; do
        if [[ $ro == "R" ]]; then
            ct=$(grep -c "$co_num" "$CFILE")
            if  [[ $ct -lt 1 ]]; then
                echo "$co_name"
            fi
        fi
    done < "$CFILE"
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
