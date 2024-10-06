#include <stdio.h>
#include <string.h>
#include "Bank.h"

void createBank(Bank *bank, const char *name) {
    strncpy(bank->name, name, 50);
    bank->accountCount = 0;
}

void addAccount(Bank *bank, Account account) {
    if (bank->accountCount < 100) {
        bank->accounts[bank->accountCount++] = account;
        printf("Account %d added to the bank %s.\n", account.accountNumber, bank->name);
    } else {
        printf("Bank is full, can't add more accounts!\n");
    }
}

void displayBank(const Bank *bank) {
    printf("\nBank Name: %s\n", bank->name);
    printf("Total Accounts: %d\n", bank->accountCount);
    for (int i = 0; i < bank->accountCount; i++) {
        displayAccount(&bank->accounts[i]);
    }
}
