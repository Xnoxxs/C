#include <stdio.h>
#include <string.h>
#include "Account.h"

void createAccount(Account *account, int accountNumber, const char *accountType, Customer owner) {
    account->accountNumber = accountNumber;
    strncpy(account->accountType, accountType, 10);
    account->balance = 0.0f; // Default balance is 0
    account->owner = owner;  // Set the customer as the account owner
}

void deposit(Account *account, float amount) {
    account->balance += amount;
    printf("Deposited $%.2f to account %d. New Balance: $%.2f\n", amount, account->accountNumber, account->balance);
}

void withdraw(Account *account, float amount) {
    if (amount > account->balance) {
        printf("Insufficient funds in account %d!\n", account->accountNumber);
    } else {
        account->balance -= amount;
        printf("Withdrew $%.2f from account %d. New Balance: $%.2f\n", amount, account->accountNumber, account->balance);
    }
}

void displayAccount(const Account *account) {
    printf("\nAccount Number: %d\n", account->accountNumber);
    printf("Account Type: %s\n", account->accountType);
    printf("Balance: $%.2f\n", account->balance);
    displayCustomer(&account->owner);
}
