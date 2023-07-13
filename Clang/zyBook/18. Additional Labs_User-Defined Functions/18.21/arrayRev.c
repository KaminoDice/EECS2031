#include <stdio.h>

int ReverseArray(int arraySize, int numberArray[], int reversedArray[]) {

   /* your code here */
   for (int i = 0; i < arraySize ; ++i) {
      reversedArray[i] = numberArray[arraySize - i - 1];
   }
   return arraySize;
}

int main(void) {

   int i;
   int arraySize = 3;
   int input[] = {2, 4, 6};
   int result[20];

   ReverseArray(arraySize, input, result);

   for (i = 0; i < arraySize; i++) {
      printf("%d ", result[i]);
   }
   printf("\n");

   return 0;

}