#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = (int *)malloc(sizeof(int));

    *ptr = 100;

    printf("Before free: %d\n", *ptr);

    free(ptr);

     //correct way to avoid dangling pointer
    // ptr = NULL;

   
    // ptr still contains the old address
    printf("Address after free: %p\n", ptr);

    // DON'T DO THIS
    printf("Value after free: %d\n", *ptr);

    return 0;
}