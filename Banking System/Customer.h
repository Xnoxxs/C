// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

typedef struct {
    char name[50];
    char address[100];
    char phone[15];
} Customer;

void createCustomer(Customer *customer, const char *name, const char *address, const char *phone);
void displayCustomer(const Customer *customer);

#endif
