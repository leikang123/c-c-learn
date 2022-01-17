#include <stdio.h>
int main()
{
    int a[5] ={1,3,5,7,9};
    int *p;
    p =a;
    int i;
    for(i=0;i<6;i++,p++)
      scanf("%d\n",p);
      for(i=0;i<5;i++,p++)
      printf("%d",*p);
      
}