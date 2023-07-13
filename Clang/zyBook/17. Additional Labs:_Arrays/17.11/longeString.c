#include <stdio.h>

int main() {

   /* Type your code here. */
   char str1[25];
   char str2[25];
   int lonstr;

   scanf("%s", str1);
   scanf("%s", str2);
   for (int i = 0; str1[i] != '\0'|| str2[i] != '\0'; ++i ){
    (str2[i] == '\0') ? (lonstr = 1) : (lonstr = 2);
    //printf("%d", i);
   }

   //printf("%d", lonstr);
   (lonstr == 1) ? (printf("%s\n", str1)) : (printf("%s\n", str2));

   return 0;
}
