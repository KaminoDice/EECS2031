#include <stdio.h>
#include <string.h>

int main() {
   const double HOMEWORK_MAX = 800.0;
   const double QUIZZES_MAX = 400.0;
   const double MIDTERM_MAX = 150.0;
   const double FINAL_MAX = 200.0;

   /* Type your code here. */
   char stuStat[2];
   double hwPts, qzPts, mdScr, fnScr;
   double homework, quiz, midex, finalex;
   scanf("%s %lf %lf %lf %lf", stuStat, &hwPts, &qzPts, &mdScr, &fnScr);
   
   if (strcmp(stuStat, "UG") * strcmp(stuStat, "G") * strcmp(stuStat, "DL") == 0) {
      (hwPts < HOMEWORK_MAX) ? (homework = hwPts / HOMEWORK_MAX * 100) : (homework = 100.0);
      printf("Homework: %.1f%%\n", homework);

      (qzPts < QUIZZES_MAX) ? (quiz = qzPts / QUIZZES_MAX * 100) : (quiz = 100.0);
      printf("Quizzes: %.1f%%\n", quiz);

      (mdScr < MIDTERM_MAX) ? (midex = mdScr / MIDTERM_MAX * 100) : (midex = 100.0);
      printf("Midterm: %.1f%%\n", midex);

      (fnScr < FINAL_MAX) ? (finalex = fnScr / FINAL_MAX * 100) : (finalex = 100.0);
      printf("Final Exam: %.1f%%\n", finalex);

      double avg;
      if (strcmp(stuStat, "UG") == 0) avg = 0.2 * (homework + quiz) + 0.3 * (midex + finalex);
      if (strcmp(stuStat, "G") ==  0) avg = 0.15 * homework + 0.05 * quiz + 0.35 * midex + 0.45 * finalex;
      if (strcmp(stuStat, "DL") == 0) avg = 0.05 * (homework + quiz) + 0.4 * midex + 0.5 * finalex;

      printf("%s average: %.1f%%\n", stuStat, avg);
      
      if (avg >= 90) {
         printf("Course grade: A\n");
      } else if (avg >= 80) {
         printf("Course grade: B\n");
      } else if (avg >= 70) {
         printf("Course grade: C\n");
      } else if (avg >= 60) {
         printf("Course grade: D\n");
      } else {
         printf("Course grade: F\n");
      }
      
   } else {
      printf("Error: student status must be UG, G or DL\n");
   }

   return 0;
}