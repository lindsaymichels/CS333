//
// Created by Lindsay Michels on 9/17/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MyStruct {
    char a;
    short b;
    char c;
};

int main() {
    struct MyStruct *myStructPtr;

    // Allocate memory for the struct
    myStructPtr = (struct MyStruct *)malloc(sizeof(struct MyStruct));

    if (myStructPtr == NULL) {
        fprintf(stderr, "Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Initialize the struct
    myStructPtr->a = 'L';
    myStructPtr->b = 12345;
    myStructPtr->c = 'M';

    // Use unsigned char * to examine the memory layout
    unsigned char *ptr = (unsigned char *)myStructPtr;

    printf("Memory layout of MyStruct:\n");
    for (size_t i = 0; i < sizeof(struct MyStruct); i++) {
        printf("Byte %zu: 0x%02X\n", i, ptr[i]);
    }

    // Test w local character array of fixed length
    char dest[5]; // char array with fixed length = 5
    int decision = 0;

    // try to copy a string that is too long
    strcpy(dest, "Hello, World!"); // This string is longer than the destination array

    // set decision variable for whether the strcpy was successful
    if (decision == 0) {
        printf("Safe\n");
    } else {
        printf("Hacked\n");
    }

    // Free the allocated memory
    free(myStructPtr);

    return 0;
}

