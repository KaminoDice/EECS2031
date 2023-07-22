# 7.9 LAB: BankAccount struct

Given main(), build a struct called BankAccount that manages checking and savings accounts. The struct has three data members: a customer name (string), the customer's savings account balance (double), and the customer's checking account balance (double). Assume customer name has a maximum length of 20.

Implement the BankAccount struct and related function declarations in BankAccount.h, and implement the related function definitions in BankAccount.c as listed below:

- BankAccount InitBankAccount(char\* newName, double amt1, double amt2) - set the customer name to parameter newName, set the checking account balance to parameter amt1 and set the savings account balance to parameter amt2. (amt stands for amount)
- BankAccount SetName(char\* newName, BankAccount account) - set the customer name
- void GetName(char\* customerName, BankAccount account) - return the customer name in customerName
- BankAccount SetChecking(double amt, BankAccount account) - set the checking account balance to parameter amt
- double GetChecking(BankAccount account) - return the checking account balance
- BankAccount SetSavings(double amt, BankAccount account) - set the savings account balance to parameter amt
- double GetSavings(BankAccount account) - return the savings account balance
- BankAccount DepositChecking(double amt, BankAccount account) - add parameter amt to the checking account balance (only if positive)
- BankAccount DepositSavings(double amt, BankAccount account) - add parameter amt to the savings account balance (only if positive)
- BankAccount WithdrawChecking(double amt, BankAccount account) - subtract parameter amt from the checking account balance (only if positive)
- BankAccount WithdrawSavings(double amt, BankAccount account) - subtract parameter amt from the savings account balance (only if positive)
- BankAccount TransferToSavings(double amt, BankAccount account) - subtract parameter amt from the checking account balance and add to the savings account balance (only if positive)