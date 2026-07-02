#include <stdio.h>

void function_1() {
    printf("function_1()\n");
}

void function_2() {
    printf("function_2()\n");
}

int main() {

    void (*func_ptr)();

    func_ptr = function_1; // parenthis
    func_ptr(); // no star involve just like normal function call

    func_ptr = function_2;
    func_ptr();

    return 0;
}