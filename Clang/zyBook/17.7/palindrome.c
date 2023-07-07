#include <stdio.h>

int main(void) {

   /* Type your code here. */
    char inStr[50];
    char ouStr[50];
    fgets(inStr, 50, stdin);
   
    int i, j;
    for (i = 0, j = 0; inStr[i] != '\0'; ++i) {
        if (inStr[i] != ' ') {
            ouStr[j] = inStr[i];
            ++j;
        }
    }
    ouStr[j] = '\0';
    
    int isPal = 1;
    for (int i = 0; i < j; ++i) {
        if (ouStr[i] != ouStr[ j - 1]) (isPal = 0);
        --j; 
    }

    (isPal == 1) ? printf("palindrome: %s\n", inStr) : printf("not a palindrome: %s\n", inStr);

    return 0;
}
