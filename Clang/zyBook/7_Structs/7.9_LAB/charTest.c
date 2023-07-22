#include <stdio.h>
#include <string.h>

int main() {
    char* ptr;
    char arr[20];
    
    ptr = "This is a test string.";
    strcpy(arr, ptr);

    printf("%s\n", ptr);
    printf("%s\n", arr);

    return 0;
}