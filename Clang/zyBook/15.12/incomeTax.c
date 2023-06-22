#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
   /* Type your code here. */
   int wageNum, intrsNum, unEmp, marrStat, witHeld, numAGI;
  
   
   scanf("%d %d %d %d %d", &wageNum, &intrsNum, &unEmp, &marrStat, &witHeld);
   
   numAGI = wageNum + intrsNum + unEmp;
   printf("AGI: $%d\n", numAGI);
   if (numAGI > 120000) {
      printf("Error: Income too high to use this form\n");
   } else { 
      int deducNum, taxIncome;
      (marrStat == 2) ? (deducNum = 24000) : (deducNum = 12000);
      
      taxIncome = numAGI - deducNum;
      if (taxIncome < 0) taxIncome = 0;
      
      printf("Deduction: $%d\n", deducNum);
      printf("Taxable income: $%d\n", taxIncome);
      
      double fedTax;
      if (marrStat == 2) {
         if (taxIncome >= 0 && taxIncome <= 20000) fedTax = round(taxIncome * 0.1);
         if (taxIncome >= 20001 && taxIncome <= 80000) fedTax = round((taxIncome - 20000)* 0.12 + 2000);
         if (taxIncome > 80000) fedTax = round(9200 + (taxIncome - 80000) * 0.22);
      } else {
         if (taxIncome >= 0 && taxIncome <= 10000) fedTax = round(taxIncome * 0.1);
         if (taxIncome >= 10001 && taxIncome <= 40000) fedTax = round(1000 + (taxIncome - 10000) * 0.12);
         if (taxIncome >= 40001 && taxIncome <= 85000) fedTax = round(4600 + (taxIncome - 40000) * 0.22);
         if (taxIncome > 85000) fedTax = round(14500 + 0.24 * (taxIncome - 85000));
      }
      
      printf("Federal tax: $%.f\n", fedTax);
      
      double taxDue = fedTax - witHeld;
      (taxDue < 0) ? printf("Tax refund: $%.f\n", -taxDue) : printf("Taxes Owed: $%.f\n", taxDue);  
   }
   return 0;
}
