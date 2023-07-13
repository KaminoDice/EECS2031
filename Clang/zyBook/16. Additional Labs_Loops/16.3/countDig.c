 #include <stdio.h>

int main(void) {

   /* Type your code here. */
   int num;
   scanf("%d", &num);

   if (num >= 11 && num <= 100) {
      while (num % 11 != 0) {
         printf("%d ", num);
         --num; 
      }
      printf("%d\n", num);
   } else {
      printf("Input must be 11-100\n");
   }

   return 0;
}
