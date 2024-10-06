#include <stdio.h>
#include "Customer.h"
#include "Account.h"
#include "Bank.h"
#include "Transactions.h"

int main() {
    // Create a Bank
    Bank myBank;
    createBank(&myBank, "My First Bank");

    // Create Customers
    Customer customer1;
    createCustomer(&customer1, "John Doe", "123 Main St", "555-1234");

    Customer customer2;
    createCustomer(&customer2, "Jane Smith", "456 Elm St", "555-5678");

    // Create Accounts for the Customers
    Account account1;
    createAccount(&account1, 1001, "Savings", customer1);

    Account account2;
    createAccount(&account2, 1002, "Checking", customer2);

    // Add Accounts to the Bank
    addAccount(&myBank, account1);
    addAccount(&myBank, account2);

    // Display Bank Information
    displayBank(&myBank);

    // Perform Transactions
    makeDeposit(&account1, 500.0f);
    makeWithdrawal(&account1, 200.0f);
    makeDeposit(&account2, 1000.0f);
    makeWithdrawal(&account2, 300.0f);

    // Display Bank Information After Transactions
    displayBank(&myBank);

    return 0;
}

// cd Banking\ System
// gcc -o app main.c Account.c Bank.c Customer.c Transaction.c
// ./app