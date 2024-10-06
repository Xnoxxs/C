// main.c
#include <stdio.h>   // Include the stdio.h header to use printf
#include "header.h"  // Include the header file to import the function declaration

int main() {
    my_function();  // Call the function implemented in header.c
    printf("Hello, Everyone!\n");
    return 0;
}

// gcc -o app main.c header.c
// ./app