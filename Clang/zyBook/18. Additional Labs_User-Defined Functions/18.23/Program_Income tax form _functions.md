# 18.23 LAB\*: Program: Income tax form - functions

**Program Specifications** Write a program to calculate U.S. income tax owed given wages, taxable interest, unemployment compensation, status (dependent, single, or married), and taxes withheld. Dollar amounts are displayed as integers without comma separators. For example, `printf("Deduction: $%d\n", deduction);`  
  
Note: this program is designed for _incremental development_. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress.  
  
**Step 1.** Within main() input wages, taxable interest, unemployment compensation, status (0=dependent, 1=single, and 2=married), and taxes withheld as integers.  

**Step 2 (2 pts).** Complete the CalcAGI() function. Calculate the adjusted gross income (AGI) that is the sum of wages, interest, and unemployment. Convert any negative values to positive before summing to correct potential input errors. Return the AGI. Note the provided code in main() calls CalcAGI() and outputs the returned value. Submit for grading to confirm two tests pass.  
Ex: If the input is:

```
20000  23  500  1  400
```

The output is:

```
AGI: $20523
```

**Step 3 (2 pts).** Complete the GetDeduction() function. Return the deduction amount based on status: (0) dependent = 6000, (1) single = 12000, or (2) married=24000. Return 6000 if the status is anything but 0, 1, or 2. Within main() call GetDeduction() and output the returned value. Submit for grading to confirm four tests pass.  
Ex: If the input is:

```
20000  23  500  1  400
```

The additional output is:

```
AGI: $20523
Deduction: $12000
```

**Step 4 (2 pts).** Complete the CalcTaxable() function. Calculate taxable amount (AGI - deduction). Set taxable to zero if calculation results in negative value. Return taxable value. Within main() call CalcTaxable() and output the returned value. Submit for grading to confirm six tests pass.  
Ex: If the input is:

```
20000  23  500  1  400
```

The additional output is:

```
AGI: $20523
Deduction: $12000
Taxable income: $8523
```

**Step 5 (2 pts).** Complete the CalcTax() function. Calculate tax amount based on status and taxable income (see tables below). Tax amount should be stored initially as a double, rounded to the nearest whole number using round(), and converted to an integer before returning. Within main() call CalcTax() and output the returned value. Submit for grading to confirm eight tests pass.  
Ex: If the input is:

```
50000  0  0  2  5000
```

The additional output is:

```
AGI: $50000
Deduction: $24000
Taxable income: $26000
Federal tax: $2720
```

| Income | Tax for Dependent or Single Filers |
| --- | --- |
| $0 - $10000 | 10% of the income |
| $10001 - $40000 | $1000 + 12% of the amount over $10000 |
| $40001 - $85000 | $4600 + 22% of the amount over $40000 |
| over $85000 | $14500 + 24% of the amount over $85000 |

| Income | Tax for Married Filers |
| --- | --- |
| $0 - $20000 | 10% of the income |
| $20001 - $80000 | $2000 + 12% of the amount over $20000 |
| over $80000 | $9200 + 22% of the amount over $80000 |

  
**Step 6 (2 pts).** Complete the CalcTaxDue() function. Set withheld parameter to zero if negative to correct potential input error. Calculate and return amount of tax due (tax - withheld). Within main() call CalcTaxDue() and output returned value. Submit for grading to confirm all tests pass.  
Ex: If the input is:

```
80000  0  500  2  12000
```

The additional output is:

```
AGI: $80500
Deduction: $24000
Taxable income: $56500
Federal tax: $6380
Tax due: $-5620
```