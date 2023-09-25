//
// Created by Lindsay Michels on 9/17/23.
//



#include <stdio.h>

/**
 * A short description of the program
 *
 * Lindsay Michels
 * 9/17/2023
 */




int main() {
    int a = 22;
    double b = 3.4567;
    char c = 'L';
    unsigned char *ptr;

    ptr = (unsigned char *)&ptr; // assign the address of ptr to itself

    for (int i = 0; i < 100; i++) {
        printf("Index %d: %02X\n", i, ptr[i]);
    }

    return 0;
}





