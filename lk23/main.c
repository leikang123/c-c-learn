#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a1,  *a2,  *a3;
    a1 = (int *)malloc(sizeof(int)*100);
    a2 = (int *)calloc(100,sizeof(int));
    a3 = (int *)realloc(a2,sizeof(int)*500);
    free(a1);
    free(a3);
    return 0;
}
