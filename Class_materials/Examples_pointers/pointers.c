#include <stdio.h>

int main() {
    
    int a = 10;
    int* b = &a;
    int** c = &b;

    printf("\nValue of a = %d\n", a);
    printf("Value of a = %d\n", *b);
    printf("Value of a = %d\n", **c);
    printf("\n");

    printf("Address of a = %p\n", (void*)&a);
    printf("Address of a = %p\n", (void*)b);
    printf("Address of a = %p\n", (void*)*c);
    printf("\n");

    printf("Address of b = %p\n", (void*)&b);
    printf("Address of b = %p\n", (void*)c);
    printf("\n");

    printf("Address of c = %p\n", (void*)&c);
    printf("\n");
    return 0;
}
