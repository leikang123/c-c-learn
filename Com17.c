#include <stdio.h>
int main()
{
int a ,b,t;
int *p,*q;
p = &a;
q =&b;
scanf("%d %d",p,q);
printf("brfore swap:\n");
printf("a=%d,b=%d\n",a,b);
t = *p;
*p = *q;
*q = t;
printf("after swap:\n");
printf("a =%d,b=%d\n",a,b);
}