#include <stdio.h>
#include <string.h>

int main(void) {

   /* Type your code here. */
   int len;
   int matcNum = 0;
   char word1[50], word2[50];
   scanf("%s %s", word1, word2);
   (strlen(word1) > strlen(word2)) ? (len = strlen(word2)) : (len = strlen(word1));
   for (int i = 0; i < len; ++i){
      if (word1[i] == word2[i]) ++matcNum;
   }
   (matcNum == 1) ? printf("%d character matches\n", matcNum) : printf("%d characters match\n", matcNum);
   
   return 0;
}