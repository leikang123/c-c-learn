#include <stdio.h>
int main()
{
    int a =10;
    int * p;
    int *q;
    p = &a;
    q = &a;
    prinft("%d %d=*p %d=*q ",a,*p,*q);
    
}