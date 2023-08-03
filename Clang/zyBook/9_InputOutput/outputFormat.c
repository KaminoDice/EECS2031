#include <stdio.h>

int main(void) {
    float myFloat = 3.14159265;
    float negFloat = 0 - myFloat;
    printf("Value: %7.2f", myFloat);
    printf("\n");
    printf("%.4f", myFloat);
    printf("\n");
    printf("%3.4e", myFloat);
    printf("\n");
    printf("%+f", myFloat);
    printf("\n");
    printf("%+f", negFloat);
    printf("\n");
    printf("%-11f", myFloat);
    printf("\n");
    printf("%-11f", myFloat * 10);
    printf("\n");
    printf("%-11f", myFloat * 100);
    printf("\n");
    printf("%-11f", myFloat * 1000);
    printf("\n");
    printf("%11f", myFloat );
    printf("\n");
    printf("%11f", myFloat  * 10);
    printf("\n");
    printf("%11f", myFloat  * 100);
    printf("\n");
    printf("%11f", myFloat  * 1000);
    printf("\n");
    printf("%08.2f", myFloat);
    printf("\n");
    printf("%-3.4f", myFloat * 10);
    printf("\n");
   

}