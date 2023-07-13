#include <stdio.h>
#include <stdbool.h>

int main(void) {

   /* Type your code here. */
   int num;
   int arr[20];
   
   scanf("%d", &num);
   for (int i = 0; i < num; ++i) {
      scanf("%d", &arr[i]);
   }
   

   int pali = 1;
   for (int i = 0; i < num; ++i) {
      if (arr[i] != arr[num - 1]) {
         pali = 0;
         break;
      }
      --num;
   }
      
   (pali == 1) ? (printf("yes\n")): (printf("no\n"));

   return 0;
}