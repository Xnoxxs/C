#include <stdio.h>
#include <string.h>
#include "Customer.h"

void createCustomer(Customer *customer, const char *name, const char *address, const char *phone) {
    strncpy(customer->name, name, 50);
    strncpy(customer->address, address, 100);
    strncpy(customer->phone, phone, 15);
}

void displayCustomer(const Customer *customer) {
    printf("Customer Name: %s\n", customer->name);
    printf("Address: %s\n", customer->address);
    printf("Phone: %s\n", customer->phone);
}
