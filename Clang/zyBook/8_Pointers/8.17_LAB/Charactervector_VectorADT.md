# 8.17 LAB: Character vector - Vector ADT

Given vector.h and vector.c from the Vector ADT section of the book, modify the code so that the vector holds characters instead of integers. Define also the following new functions in vector.c :

1. `void vector_from_string(vector* v, char* string)` - Create vector v then copy the characters from string to v.
2. `void vector_print(vector* v)` - Print vector v as a string; do not end with a newline

The result will implement a string that is more flexible than the standard C char\* strings. In particular insertion and deletion of characters are allowed anywhere in the strings.

The main program performs various actions to test the new vector. Complete main() by replacing each TODO comment with code that implements the described actions.

Note: Some operations in main() occur in pairs. After the program performs the first operation, the second operation is applied to the result of the first operation, rather than the state of the vector before performing the first operation.

Ex:

```
vector = friend
Input indices for removal: a = 1 b = 2
    friend -- removing character at index 1 --> fiend
    fiend -- removing character at index 2 --> find
```

Ex: If the input is:

```
ridge
y
0 3
0 e 1 r
1 n 2 e
```

the output is:

```
ridge
ridgey
idgy
ergy
energy
```