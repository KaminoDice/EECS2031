#include <stdio.h>

int main(void) {
   int size;
   
   scanf("%d", &size);
   int listA[size];   // List A
   int listB[size];   // List B

   /* Type your code here. */
   for (int i = 0; i < size; ++i) {
    scanf("%d", &listA[i]);
   }

   for (int i = 0; i < size; ++i) {
    scanf("%d", &listB[i]);
   }

   int sum = 0;
   for (int i = 0; i < size; ++i) {
    sum += listA[i] * listB[i];
   }

   printf("%d\n", sum);

   return 0;
}
