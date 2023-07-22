#include <stdio.h>
#include <string.h>

int main() {
   char phoneNumber[11];
   /* Add more variables as needed */
   char fmtPhnum[14] = "(";
   
   scanf("%s", phoneNumber);
   /* Type your code here */
   strncat(fmtPhnum, phoneNumber, 3);
   strcat(fmtPhnum, ") ");
   strncat(fmtPhnum, &phoneNumber[3], 3);
   strcat(fmtPhnum, "-");
   strcat(fmtPhnum, &phoneNumber[6]);

   printf("%s\n", fmtPhnum);
   
   return 0;
}