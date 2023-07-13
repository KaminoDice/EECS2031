#include <stdio.h>

int main(void) {

   /* Type your code here. */
   const int NUM_ROWS = 4;
   const int NUM_COLS = 3;
   int twoD[NUM_ROWS][NUM_COLS];

   for (int i = 0; i < NUM_ROWS; ++i) {
      for (int j = 0; j < NUM_COLS; ++j) {
         scanf("%d", &twoD[i][j]);
    }
   }

   for (int i = NUM_ROWS - 1; i >= 0; --i) {
      for (int j = NUM_COLS - 1; j >= 0; --j) {
         printf("%d ", twoD[i][j]);
      }
      printf("\n");
   }

   return 0;
}