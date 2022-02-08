#include <stdio.h>
int main()
{
    int a[5] = {1,4,7,12,14};
    int i;
    int *p;
    p=a;
    for(i=0;i<5;i++)
    {
        //printf("%d \n",*(p+i));
       //  printf("%d\n",p[i]);
        printf("%d\n",*p);
        p++;
    }
}