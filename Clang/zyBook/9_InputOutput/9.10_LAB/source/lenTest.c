#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char str[] = "five";
    const int L1 = 5;
    const int L2 = 4;
    const int L3 = 3;
    char str1[L1];
    char str2[L2];
    char str3[L3];
    
    // strcpy(str1, "five");
    // strcpy(str2, "five");
    
    for (int i = 0; i < strlen(str); ++i) {
        str1[i] = str[i];
        str2[i] = str[i];
        str3[i] = str[i];
    }
    printf("%s\n%s\n%s\n", str1, str2, str3);
    
    for (int i = 0; i < strlen(str); ++i) {
        printf("%d\n", str1[i]);
        printf("%d\n", str2[i]);
        printf("%d\n", str3[i]);
        printf("\n");
    }
}