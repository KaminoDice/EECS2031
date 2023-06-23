#include <stdio.h>

int main(void) {

   /* Type your code here. */
   int n;
   scanf("%d", &n);
   for (int i = n; i > 0; --i) {
      for (int j = 0; j < i; ++j) {
         printf("* ");
      }
      printf("\n");
   }

   return 0;
}