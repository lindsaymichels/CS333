//
// Created by Lindsay Michels on 9/17/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    //  size of memory to allocate (in bytes)
    size_t mem_size = 1024 * 1024; // 1 MB

    while (1) {
        // allocate memory w malloc
        char *mem = (char *)malloc(mem_size);

        if (mem == NULL) {
            fprintf(stderr, "Memory allocation failed. Exiting...\n");
            break;
        }

        printf("Allocated %lu bytes of memory.\n", mem_size);

        // sleep to observe memory usage in 'top'
        sleep(1);


        free(mem);
        printf("Freed the allocated memory.\n");

        // sleep to observe memory usage after freeing
        sleep(1);
    }

    return 0;
}





