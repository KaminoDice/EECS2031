#include<stdio.h>
#include <string.h>

int main(void) {

   /* Type your code here. */
   printf("Enter a title for the data:\n");
   char title[50];
   fgets(title, 50, stdin);
   printf("You entered:%s\n", title);
   
   printf("Enter the column 1 header:\n");
   char cl1[50];
   fgets(cl1, 50, stdin);
   printf("You entered:%s\n", cl1);

   printf("Enter the column2 header:\n");
   char cl2[50];
   fgets(cl2, 50, stdin);
   printf("You entered:%s\n", cl2);

   
   
   char line[50];
   int count = 0;
   
   while (count < 50) {
      printf("Enter a data point (-1 to stop input):\n");
      fgets(line, 50, stdin);
      if (line == "-1\n"){
         break;
      }

      char str[20];
      int num, len;
      int commNum = 0, intNum = 0;
      int i = 0, j = 0, k = 0, p = 0;

      if (sscanf(line, "%[^,],%d", str, num) != 2) {
          printf("Error: No comma in string.\n");
      } else {
          for (int i = 0; i < strlen(str); ++i) {
              if (str[i] == ' ') {
                  str[i] = '\0';
              }
          }
          printf("Data string: %s\n", str);
          printf("Data integer: %d\n", num);
      }
   }
   return 0;
}