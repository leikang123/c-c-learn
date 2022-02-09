#include <stdio.h>
int main()
{
    int *pi = (int*) malloc(8);
    *pi = 7;
    printf("*pi:%d\n",*pi);
    free(pi);
    
}