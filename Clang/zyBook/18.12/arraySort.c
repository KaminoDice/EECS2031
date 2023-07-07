#include <stdio.h>

/* Define your function here */
void SortArray(int sortingList[], int numVals) {
    for (int j = numVals - 1; j > 0; --j){
        int tmp;
        for (int i = 0; i < j; ++i){
            if (sortingList[i] < sortingList[i + 1]) {
                tmp = sortingList[i];
                sortingList[i] = sortingList[i + 1];
                sortingList[i + 1] = tmp;
            }
        }    
    }
}

int main(void) {

   /* Type your code here. */
   int nums;
   scanf("%d", &nums);
   
   int inArray[nums];
   for (int i = 0; i < nums; ++i){
      scanf("%d", &inArray[i]);
   }
   SortArray(inArray, nums);
   
   for (int i = 0; i < nums; ++i){
      printf("%d," , inArray[i]);
   }
   printf("\n");

   return 0;
}
