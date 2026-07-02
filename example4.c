#include <stdio.h>
#include <malloc.h>

void main() {
    char *p[10];

    printf("p: %p\n", p);

    for (int i = 0; i < 10; i++) {
        p[i] = (char *)malloc(1);
        printf("p[%d]: %p\n", i, p[i]);
    }

    for (int i = 0; i < 10; i++) {
        free(p[i]);
    }
}