#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* array, int size) {
   for (int j = 0; j < size; ++j) {
      printf("%d ", array[j]);
   }
}

// Return the first n Fibonacci numbers
// fibonacci(0) = 0, fibonacci(1) = 1, fibonacci(2) = 1
// Ex: n = 5, seq = 0 1 1 2 3
int* Fibonacci(int n) {
   int* seq;
   int j;

   /* Type your code here. */
   seq = (int*)malloc(n * sizeof(int));

   for (j = 0 ; j < n; ++j) {
       if (j == 0) {
           seq[j] = 0;
       } else if (j == 1) {
           seq[j] = 1;
       } else {
           seq[j] = seq[j - 1] + seq[j - 2];
       }
   }

   return seq;
}

// Return sequence of squares for 1..n (inclusive)
// Ex: sqrn = 3, seq = 1 4 9
int* Squares(int n) {
   int* seq;

   /* Type your code here. */
   seq = (int*)malloc(n * sizeof(int));
   for (int i = 0; i < n; ++i) {
      seq[i] = (i + 1) * (i + 1);
   }

   return seq;
}

// Return an array that is a copy of array1 followed by
// the elements of array2
int* Concatenate(int* array1, int size1, int* array2, int size2) {
   int j;
   int* seq;

   /* Type your code here. */
   j = size1 + size2;
   seq = (int*)malloc(j * sizeof(int));
   for (int i = 0; i < j; ++i) {
      if (i < size1) {
        seq[i] = array1[i];
      } else { 
        seq[i] = array2[i - size1];
      }
   }

   return seq;
}

int main(void) {

   int fibn;                                 // seq of first fibn Fibonacci numbers
                                             // Ex: fibn = 5, seq = 0 1 1 2 3
   int sqrn;                                 // number of squares starting with 1
                                             // Ex: sqrn = 3, seq = 1 4 9
   scanf("%d %d", &fibn, &sqrn);

   int* fibs;
   int* sqrs;
   int* conc;

   fibs = Fibonacci(fibn);
   PrintArray(fibs, fibn);
   printf("\n");

   sqrs = Squares(sqrn);
   PrintArray(sqrs, sqrn);
   printf("\n");

   conc = Concatenate(fibs, fibn, sqrs, sqrn);
   PrintArray(conc, fibn + sqrn);
   printf("\n");

   return 0;
}
