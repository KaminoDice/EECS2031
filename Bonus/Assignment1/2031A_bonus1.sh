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
    awk -F '!' '($4 == "O") { option[$1] = 1 } ($4 == "R") { required[$1] = 1 } END { for (course in option) { if (!(course in required)) { print course } } }' "$CFILE"
elif [[ $1 == "-toomuch" ]]; then
    awk -F '!' '$4 == "R" { count[$1]++ } END { for (course in count) { if (count[course] > 2x) { print course } } }' "$CFILE"
fi
