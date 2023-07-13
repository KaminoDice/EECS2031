#include <stdio.h>
#include <string.h>

/* Define your function here */
int CalcNumCharacters(char* userString, char userChar) {
   int num = 0;
   for (int i = 0; i < strlen(userString); ++i) {
      if (userString[i] == userChar) (++num);
   }
   return num;
}

int main(void) {

   /* Type your code here. */
   char sCha;
   char str[50];

   scanf("%c", &sCha);
   scanf("%s", str);
   int num = CalcNumCharacters(str, sCha);
   (num == 1) ? (printf("%d %c\n", num, sCha)) : (printf("%d %c's\n", num, sCha));

   return 0;
}