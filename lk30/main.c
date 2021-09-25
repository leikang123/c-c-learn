#include <stdio.h>

int main()
{
 int n,m,k;
 printf("请输入 m,n:\n");
 scanf("%d%d",&m,&n);
 if (m>n)
 {
     k=n;
 }else
 {
     k=m;
 }
 while (k >1)
 {
     if (m %k ==0 && n%k ==0)
     {
         break;
         k --;
     }
 }
    printf("%d",k);
}
