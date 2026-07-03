#include <stdio.h>

int main() {
    int i = 10;

    void *ptr = &i;      // Generic pointer Store address of int

    printf("Address = %p\n", ptr);
    // printf("Address = %d\n", *ptr);// error becoz d-references not possible in void pointer


    return 0;
}