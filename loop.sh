#!/bin/bash
n="1 2 3 4 5"
for i in $n
do 
       let i=2*$i
       echo $i
done
