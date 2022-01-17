#include <stdio.h>
int main()
{
    int a[5]={1,3,5,7,9};
    int i;
    int *p;
    p = a;
    for(i=0;i<6;i++)
       printf("%d%d%d\n",p[1],p[2],p[3]);
}
