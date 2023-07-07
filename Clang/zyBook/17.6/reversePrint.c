#include <stdio.h>
#include <string.h>

int main(void) {

   /* Type your code here. */
   char userInput[50], temp;
   
   fgets(userInput, 50, stdin); 
   //scanf("%[^\n]", userInput);
   while (strcmp(userInput,"Done\n") != 0 && strcmp(userInput,"d\n") !=0 && strcmp(userInput,"done\n") != 0) {

    int len = strlen(userInput);
    int rig = len - 1;

    for (int i = 0; i < rig; ++i) {
        temp = userInput[i];
        userInput[i] = userInput[len - 2 - i];
        userInput[len - 2 - i] = temp;
        --rig;
    }
    printf("%s", userInput);
    fgets(userInput, 50, stdin); 
    //scanf("%s", userInput);
   }

   return 0;
}
