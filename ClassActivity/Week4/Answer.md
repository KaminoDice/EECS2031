# Week 4 Class Activity Solution

## Write a sed/grep script that displays only lines that contain at least two non-neighboring digits.

For non-neighboring digits:

```
sed -e '/[0-9][^0-9]\+[0-9]/!d'
```

a line with at least two digits is detected with the /[0-9][^0-9]*[0-9]/ regex (digit, any zero or more chars other than digits, a digit)

```bash
indigo1 301 % bash

bash-4.4$ vi b

bash-4.4$ sed -e '/[0-9][^0-9]\+[0-9]/!d' b

flm5lb6lb

dldl6lsfd4ldm5fldm

bash-4.4$ cat b

clvl

fkmb56mklf

flm5lb6lb

56

dldl6lsfd4ldm5fldm

fld3kfssfln

bash-4.4$
```

## Write a sed script (just sed command(s) in a file) that removes (does not print) any line with more than one capital letter.

```bash
sed -e '/[A-Z][^A-Z]*[A-Z]/d'
```

```bash
bash-4.4$ sed -e '/[A-Z][^A-Z]*[A-Z]/d' b
A
Llkl
ljlA
fkmb56mklf
flm5lb6lb
56
dldl6lsfd4ldm5fldm
fld3kfssfln
bash-4.4$ cat b
ABCD
AB
A
Llkl
ljlA
clvlAB
fkmb56mklf
flm5lb6lb
56
dldl6lsfd4ldm5fldm
fld3kfssfln
bash-4.4$
```

## Write a bash script that reads from a text file (p2a.txt).

Each line in the file contains either 4 or 5 integers.

Display the line where the first integer is greater than the sum of the second and third integers.

Save as problem_5.sh

```bash
p2a.txt
=================
10 3 2 7 22
12 9 1 9 15
1 13 45 3
4 1 3 2
12 12 12 12 5
25 1 3 5
```

```bash
IFS=" "
sum=0

while read a b c d e; do
        sum=$((b+c))
        if [ $a -gt $sum ]; then
                echo $a $b $c $d $e
        fi
done < p2a.txt

```

## Write sed commands in a file that does the following:

Any line that does not contain the pattern “ABABAB” must not be displayed (deleted). if the line that was not deleted, contains the word rain, change that to heavy rain

Save as problem_4.sed

```bash
testfile
================
My Name is ABABAB 
My name is not AB it is CDCDCD
There is rain 
There is rain & My name is ABABAB

```

```bash
/ABABAB/!d
s/rain/heavy rain/g

```

## Read at least three integers

(each integer on a separate line) continue reading until you read an integer that is greater than the sum of the two previous integers. Then display that integer and quit.

**File name labtest1B_2.sh**

```bash
a=1                      #will not display a number after reading it until the number is greater than the sum of the 2 before
read -s a
read -s b
read -s c
sum=$(($a + $b))
if [ $c -gt $sum ]; then
	echo $c
	exit
fi

while a==1
do
	read -s a
	sum=$(($c + $b))
	if [ $a -gt $sum ]; then
		echo $a
		exit
	fi
	read -s  b
	sum=$(($c + $a))
        if [ $b -gt $sum ]; then
                echo $b
		exit
	fi

	read -s c
	sum=$(($a + $b))
        if [ $c -gt $sum ]; then
            echo $c
	    exit
	fi
done

```
