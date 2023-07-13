#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Calculate AGI and repair any negative values
int CalcAGI(int wages, int interest, int unemployment) {
   /* Complete the function and update the return statement */

   return abs(wages) + abs(interest) + abs(unemployment);
}

// Calculate deduction depending on single, dependent or married
int GetDeduction(int status) {
   /* Complete the function and update the return statement */
    int deducNum;
    if (status == 1) {
        deducNum = 12000;
    } else if (status == 2) {
        deducNum = 24000;
    } else {
        deducNum = 6000;
    }
   return deducNum;
}

// Calculate taxable but not allow negative results
int CalcTaxable(int agi, int deduction) {
   /* Complete the function and update the return statement */

   return ((agi - deduction) > 0) ? (agi - deduction) : 0;
}

// Calculate tax for single or dependent
int CalcTax(int status, int taxable) {
   /* Complete the function and update the return statement */
   int tax;
   if (status == 2) {
      if (taxable >= 0 && taxable <= 20000) tax = round(taxable * 0.1);
      if (taxable >= 20001 && taxable <= 80000) tax = round((taxable -20000)*0.12) + 2000;
      if (taxable > 80000) tax = round((taxable - 80000)*0.22) + 9200;
   } else {
      if (taxable >= 0 && taxable <= 10000) tax = round(taxable * 0.1);
      if (taxable >= 10001 && taxable <= 40000) tax = round(1000 + (taxable - 10000) * 0.12);
      if (taxable >= 40001 && taxable <= 85000) tax = round(4600 + (taxable - 40000) * 0.22);
      if (taxable > 85000) tax = round(14500 + 0.24 * (taxable - 85000));
   } 

   return tax;
}

// Calculate tax due and check for negative withheld
int CalcTaxDue(int tax, int withheld) {
   /* Complete the function and update the return statement */

   return tax - withheld;
}

int main(void) {
   int wages, interest, unemployment,status, withheld;
   int tax, agi, due, deduction, taxable;

   // Step #1: Input information
   scanf("%d %d %d %d %d", &wages, &interest, &unemployment, &status, &withheld);

   // Step #2: Calculate AGI
   agi = CalcAGI(wages, interest, unemployment);
   printf("AGI: $%d\n", agi);

   deduction = GetDeduction(status);
   printf("Deduction: $%d\n", deduction);

   taxable = CalcTaxable(agi, deduction);
   printf("Taxable income: $%d\n", taxable);

   tax = CalcTax(status, taxable);
   printf("Federal tax: $%d\n", tax);

   due = CalcTaxDue(tax, withheld);
   printf("Tax due: $%d\n", due);
   
   return 0;
}
