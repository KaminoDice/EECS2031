#include <stdlib.h>
#include <stdio.h>

int main() {
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;

   int seed;
   scanf("%d", &seed);
   srand(seed);

   /* Type your code here. */
   char player1[40];
   char player2[40];
   scanf("%s %s", player1, player2);
   
   int roundNum;
   scanf("%d", &roundNum);
   while (roundNum <= 0) {
      printf("Rounds must be > 0\n");
      scanf("%d", &roundNum);
   }
   printf("%s vs %s for %d rounds\n", player1, player2, roundNum);

   int p1winVal = 0;
   int p2winVal = 0;
   for (int i = 0; i < roundNum; ++i) {
      int p1Val = rand() % 3;
      int p2Val = rand() % 3;
      while (p1Val == p2Val){
         printf("Tie\n");
         p1Val = rand() % 3;
         p2Val = rand() % 3;
      }
      if (p1Val == ROCK && p2Val == PAPER) {
         printf("%s wins with paper\n", player2);
         ++p2winVal;
      } else if (p1Val == ROCK && p2Val == SCISSORS) {
         printf("%s wins with rock\n", player1);
         ++p1winVal;
      } else if (p1Val == PAPER && p2Val == SCISSORS) {
         printf("%s wins with scissors\n", player2);
         ++p2winVal;
      } else if (p1Val == PAPER && p2Val == ROCK) {
         printf("%s wins with paper\n", player1);
         ++p1winVal;
      } else if (p1Val == SCISSORS && p2Val == ROCK) {
         printf("%s wins with rock\n", player2);
         ++p2winVal;
      } else {
         printf("%s wins with scissors\n", player1);
         ++p1winVal;
      }
   }

   printf("%s wins %d and %s wins %d\n", player1, p1winVal, player2, p2winVal);


   return 0;

}
