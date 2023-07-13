#include <stdlib.h>
#include <stdio.h>

int main() {
    int seed;
    scanf("%d", &seed);
    srand(seed);
    
    const int TIMES = 10; 
    for (int i = 1; i <= TIMES; ++i) {
        int value = rand();
        int mod3value= value % 3;
        printf("[%d]: \norign random generate is: %d \nand mod3 is: %d\n\n", i, value, mod3value);
    }
}
