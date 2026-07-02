#include <stdio.h>

int main() {
    char a = 'A';
    int b = 1024;
    float c = 1.0;
    long long int d = 12345;

    char *pa = &a;
    int *pb = &b;
    float *pc = &c;
    long long int *pd = &d;

    printf("sizeof(*pa): %lu\n", sizeof(*pa));
    printf("sizeof(*pb): %lu\n", sizeof(*pb));
    printf("sizeof(*pc): %lu\n", sizeof(*pc));
    printf("sizeof(*pd): %lu\n\n", sizeof(*pd));

    *pa = 'B';
    *pb = *pb + 1;
    *pc = *pc + 1;
    *pd = *pd + 1;

    printf("a: %c\n", *pa);
    printf("b: %d\n", *pb);
    printf("c: %f\n", *pc);
    printf("d: %lld\n", *pd);

    return 0;
}