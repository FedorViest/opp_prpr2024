#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr_calloc;
    int* ptr_malloc;
    int** ptr_2d;
    int i, j;
    ptr_calloc = (int *)calloc(5, sizeof(int));
    ptr_malloc = (int *)malloc(5 * sizeof(int));

    ptr_2d = (int **)malloc(5 * sizeof(int *));
    for (i = 0; i < 5; i++) {
        ptr_2d[i] = (int *)calloc(5, sizeof(int));
    }

    printf("calloc\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", ptr_calloc[i]);
    }
    printf("\n");

    printf("malloc\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", ptr_malloc[i]);
    }
    printf("\n");

    printf("2d array\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\n", ptr_2d[i][j]);
        }
    }
    printf("\n");
    free(ptr_calloc);
    free(ptr_malloc);

    for (i = 0; i < 5; i++) {
        free(ptr_2d[i]);
    }
    free(ptr_2d);
    return 0;
}