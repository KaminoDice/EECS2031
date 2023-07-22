/* TODO: Type your header file guards and include directives here. */
#include <stdio.h>
#include <string.h>

#include "BankAccount.h"

/* Type your code here. */
BankAccount InitBankAccount(char* newName, double amt1, double amt2) {
    BankAccount ba;
    ba.name = newName;
    ba.chkBlc = amt1;
    ba.savBlc = amt2;
    return ba;
}

BankAccount SetName(char* newName, BankAccount account) {
    account.name = newName;
    return account;
}

void GetName(char* customerName, BankAccount account) {
    strcpy(customerName, account.name);
}

BankAccount SetChecking(double amt, BankAccount account) {
    account.chkBlc = amt;
    return account;
}

double GetChecking(BankAccount account) {
    return account.chkBlc;
}

BankAccount SetSavings(double amt, BankAccount account) {
    account.savBlc = amt;
    return account;
}

double GetSavings(BankAccount account) {
    return account.savBlc;
}

BankAccount DepositChecking(double amt, BankAccount account) {
    if (amt > 0) account.chkBlc += amt;
    return account;
}

BankAccount DepositSavings(double amt, BankAccount account) {
    if (amt > 0) account.savBlc += amt;
    return account;
}

BankAccount WithdrawChecking(double amt, BankAccount account) {
    if (amt > 0) account.chkBlc -= amt;
    return account;
}

BankAccount WithdrawSavings(double amt, BankAccount account) {
    if (amt > 0) account.savBlc -= amt;
    return account;
}

BankAccount TransferToSavings(double amt, BankAccount account) {
    if (amt > 0) {
        account.savBlc += amt;
        account.chkBlc -= amt;
    }
    return account;
}