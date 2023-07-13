#include <stdio.h>

double costCal(double inPrice, int roomWid, int roomLen) {
   
   int roomArea = roomWid * roomLen;
   printf("Room: %d sq ft\n", roomArea);

   double carpCost = roomArea * inPrice * 1.2;
   printf("Carpet: $%.2f\n", carpCost);

   double laborCost = roomArea * 0.75;
   printf("Labor: $%.2f\n", laborCost);

   double tax = 0.07 * (laborCost + carpCost);
   printf("Tax: $%.2f\n", tax);

   double cost = carpCost + laborCost + tax;
   printf("Cost: $%.2f\n", cost);

   return cost;
}

int main() {

   /* Type your code here. */
   int roomWid, roomLen;
   double inPrice;
   double pcost;
   double totalCost = 0.0;

   for (int i = 1; i < 4; ++i) {
    printf("Order #%d\n", i);
    scanf("%lf %d %d", &inPrice, &roomWid, &roomLen);
    pcost = costCal(inPrice, roomWid, roomLen);
    totalCost += pcost;
    printf("\n");

   }
   
   printf("Total Sales: $%.2f\n", totalCost);


   return 0;
}


