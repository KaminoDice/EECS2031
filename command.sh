# Filename: commands.sh
# Author: Last name, first name
# Email: saikoro@my.yorku.ca
# Login ID: saikoro

# Lab 1B-1
echo "This is a file named myFile" > myFile
# Lab 1B-2
echo "This\nfile\nshould\nhave\n6 lines" >> myFile

# Lab 1B-3
who >> myFile
who am i >> myFile
date >> myFile

# Lab 1B-4
ls -l myFile

chmod a+r myFile
ls -l myFile

chmod a+r 
ls -l myFile

chmod 660 myFile
ls -l myFile

chmod go-w myFile
ls -l myFile

chmod ug+x myFile
ls -l myFile

## Lab 1B-5
mkdir myStuff
ls -ld myStuff

chmod a+r myStuff
ls -ld myStuff

chmod ug+w,o-r myStuff
ls -ld myStuff

chmod a-w,u+w myStuff
ls -ld myStuff

chmod 710 mySutff
ls -ld myStuff

## Lab 1B-6
echo "backgammon" > backgammon
echo "backpacking" > backpacking
echo "baseball" > baseball
echo "boxing" > boxing
echo "biking" > biking
echo "chess" > chess
echo "fencing" > fencing
echo "blackjack" > blackjack
echo "groupA" > groupA
eecho "groupB" > groupB
echo "groupX" > groupX
echo "groupY" > groupY

cat *ing

ls *[xX]*

cat *o*

cat backgammon backpacking blackjack 

cat backgammon backpacking blackjack > all3

## Lab 1B-7
grep -i "alex" phone_book.txt

grep "(905)" phone_book.txt | wc -l

grep "babysitter" phone_book.txt

grep "friend" phone_book.txt | wc -l