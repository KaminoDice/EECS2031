#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   const int MAX_TITLE_CHARS = 44;  // Maximum length of movie titles
   const int LINE_LIMIT = 100;   // Maximum length of each line in the text file
   char line[LINE_LIMIT];
   char inputFileName[25];
   
   /* Type your code here. */
   FILE* inFile = NULL;
   scanf("%s", inputFileName);
   inFile = fopen(inputFileName, "r");
   if (inFile == NULL) {
      return 1;
   }
   char lasTitle[MAX_TITLE_CHARS];
   int lineNum = 1;
   fgets(line, LINE_LIMIT, inFile);
   while (!feof(inFile)) {
      char title[MAX_TITLE_CHARS];
      char rating[6];
      char showtime[6];
    //   sscanf(line, "%[^,],%[^,]44,%s\n", showtime, title, rating);
      int j = 0;
      int k = 0;
      for (int i = 0; i < strlen(line); ++i ) {
         if (line[i] != ',' && j == 0) {
            showtime[i] = line[i];
            ++k;
         } else if (line[i] == ',' && j == 0) {
            showtime[i] = '\0';
            ++j;
            ++k;
            // printf("Showtime: %s\n", showtime);
            // printf("Strlen: %d\n", strlen(showtime));
         } else if (i - strlen(showtime) - 1 < MAX_TITLE_CHARS && line[i] != ',' && j == 1) {
            title[i - strlen(showtime) - 1] = line[i];
            ++k;
         } else if ((line[i] == ',' || i - strlen(showtime) - 1 == MAX_TITLE_CHARS ) && j == 1) {
            if (i - strlen(showtime) < MAX_TITLE_CHARS) {
                title[i - strlen(showtime)] = '\0';
            } else {
                title[MAX_TITLE_CHARS] = '\0';
            }
            ++k;
            if (line[i] == ',') ++j;
            // printf("Title: %44s\n", title);
         } else if (line[i] != '\n' && j == 2) {
            rating[i - k] = line[i];
         } else if (line[i] == '\n' && j == 2) {
            rating[i - k] = '\0';
            // printf("Rating: %s\n", rating);
         } else {
            ++k;
         }
      }

      if (strcmp(title, lasTitle) == 0 && strcmp("\n", line) != 0) {
          printf(" %s", showtime);
      } else if (lineNum == 1)  {
          printf("%-44.44s | %5.5s | %s", title, rating, showtime);
      } else  {
          printf("\n");
          printf("%-44.44s | %5.5s | %s", title, rating, showtime);                           
      }
      strcpy(lasTitle, title);
      ++lineNum;
      fgets(line, LINE_LIMIT, inFile);
   }
   fclose(inFile);
   printf("\n");

   return 0;
}
