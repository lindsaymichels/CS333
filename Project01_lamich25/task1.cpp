
#include <stdio.h>

/**
 * A short description of the program
 *
 * Lindsay Michels
 * 9/17/2023
 */



/* A short description of the function, if necessary
 */
int main (int arg, char *argv[]) {

    char c = 'L';
    short s = 5000;
    int i = 54321987;
    long l = 123456789012345;
    float f = 323.323;
    double d = 420.679;

    unsigned char *ptr;
    // memory rep for char
    ptr = (unsigned char *)&c;
    printf("char: ");
    for (int j = 0; j < sizeof(char); j++) {
        printf("%02X ", *ptr++);
    }
    printf("\n");

    // memory rep for short
    ptr = (unsigned char *)&s;
    printf("short: ");
    for (int j = 0; j < sizeof(short); j++) {
        printf("%02X ", *ptr++);
    }
    printf("\n");

    // memory rep for int
    ptr = (unsigned char *)&i;
    printf("int: ");
    for (int j = 0; j < sizeof(int); j++) {
        printf("%02X ", *ptr++);
    }
    printf("\n");

    // memory rep for long
    ptr = (unsigned char *)&l;
    printf("long: ");
    for (int j = 0; j < sizeof(long); j++) {
        printf("%02X ", *ptr++);
    }
    printf("\n");

    // memory rep for float
    ptr = (unsigned char *)&f;
    printf("float: ");
    for (int j = 0; j < sizeof(float); j++) {
        printf("%02X ", *ptr++);
    }
    printf("\n");

    // memory rep for double
    ptr = (unsigned char *)&d;
    printf("double: ");
    for (int j = 0; j < sizeof(double); j++) {
        printf("%02X ", *ptr++);
    }
    printf("\n");

    return 0;
}










