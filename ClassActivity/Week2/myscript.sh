#!/bin/bash

ls $HOME

grep -lr "A" ~ | wc -l

wc -m t1.txt

echo "This is a text stream file which contains 5-10 words." > t1.txt

if [ $(tail -n1 t1.txt | wc -l) -eq 1 ];then
    echo "Newline at the end of the file"
fi

hexdump -C t1.txt

head -c 1 t1.txt | xxd -b


