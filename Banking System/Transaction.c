#include "Transactions.h"

void makeDeposit(Account *account, float amount) {
    deposit(account, amount);
}

void makeWithdrawal(Account *account, float amount) {
    withdraw(account, amount);
}
