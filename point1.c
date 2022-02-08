#include <stdio.h>
int main()
{
    int a[5]= {1,3,5,7,9};
    int i;
    int *p;
    p = a;
    for(i=0;i<5;i++,p++)
    {
        scanf("%d\n",p);
    }
    for(i=0;i<5;i++,p++)
    {
        printf("%d\n",*p);
    }
}