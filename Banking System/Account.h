// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Customer.h"

typedef struct {
    int accountNumber;
    float balance;
    char accountType[10]; // e.g., "Savings", "Checking"
    Customer owner;
} Account;

void createAccount(Account *account, int accountNumber, const char *accountType, Customer owner);
void deposit(Account *account, float amount);
void withdraw(Account *account, float amount);
void displayAccount(const Account *account);

#endif
