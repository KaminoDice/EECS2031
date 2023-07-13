# 17.6 LAB: Print string in reverse

Write a program that takes in a line of text as input, and outputs that line of text in reverse. You may assume that each line of text will not exceed 50 characters.The program repeats, ending when the user enters "Done", "done", or "d" for the line of text.

Ex: If the input is:

```
Hello there
Hey
done
```

then the output is:

```
ereht olleH
yeH
```

Hint: Use the fgets() function to read a string with spaces from the user input. Recall that if a newline character is read from the user input before the specified number of characters are read, the newline character itself is also written into the string.