#include <stdio.h>

int main(void) {
    char str1[50] = "1053 3.14";
    char str2[50];
    int num1;
    float num2;
    sscanf(str1, "%s %d %f", str2, &num1, &num2);
    printf("%s\n%d\n%.2f\n", str2, num1, num2);
    return 0;
}
