// Bank.h
#ifndef BANK_H
#define BANK_H

#include "Account.h"

typedef struct {
    char name[50];
    Account accounts[100]; // Bank can hold up to 100 accounts
    int accountCount;
} Bank;

void createBank(Bank *bank, const char *name);
void addAccount(Bank *bank, Account account);
void displayBank(const Bank *bank);

#endif
