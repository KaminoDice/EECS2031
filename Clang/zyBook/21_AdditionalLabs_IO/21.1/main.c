#include<stdio.h>
#include <string.h>

int main(void) {

   /* Type your code here. */
   char line[50];
   printf("Enter input string:\n");
   fgets(line, 50, stdin);
   while ( strcmp(line, "q\n") != 0 ) {
      char str1[50];
      char str2[50];
      if (sscanf(line, "%[^,],%s", str1, str2) != 2) {
          printf("Error: No comma in string.\n");
      } else {
          for (int i = 0; i < strlen(str1); ++i) {
              if (str1[i] == ' ') {
                  str1[i] = '\0';
              }
          }
          printf("First word: %s\n", str1);
          printf("Second word: %s\n", str2);
      }
      printf("\n");
      printf("Enter input string:\n");
      fgets(line, 50, stdin);
   }

   return 0;
}