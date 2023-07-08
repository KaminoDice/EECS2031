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
        printf("[%d]: orign random generate is %d and mod3 is %d", i, value, mod3value);
    }
}
