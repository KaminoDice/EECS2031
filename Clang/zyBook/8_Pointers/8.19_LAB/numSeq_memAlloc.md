# 8.19 LAB: Number sequences - memory allocation

Complete the following functions to generate different sequences of numbers:

- `int* Fibonacci(int n)`
    - Create an array of integers and size n
    - Fill in the array with the first n Fibonacci numbers. The Fibonacci sequence begins with 0 and then 1 follows. All subsequent values are the sum of the previous two, ex: 0, 1, 1, 2, 3, 5, 8, 13.
    - Return the array
- `int* Squares(int n)`
    - Create an array of integers and size n
    - Fill in the array with the squares of 1 to n (inclusive). Ex: 1, 4, 9, …, n<sup>2</sup>
    - Return the array
- `int* Concatenate(int* array1, int size1, int* array2, int size2)`
    - Create an array of integers and size = size1 + size2
    - Fill in the array with the elements of array1 followed by the elements of array2
    - Return the array

main() reads the size of the Fibonacci and the squares sequences and calls the three functions above to create the arrays. Then main() calls PrintArray() provided in the template to print the arrays.

Ex: If the input is:

```
6 4
```

the output is:

```
0 1 1 2 3 5 
1 4 9 16 
0 1 1 2 3 5 1 4 9 16 
```