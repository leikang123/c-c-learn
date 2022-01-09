#include <stdio.h>
int main ()
{
    int n[100];
    int i,a1,a2,j=0;
    for(i=1;i<=100;i++)
    {
        a1 =i %10;
        a2 = i/10;
        if(i%3==0 && (a1 ==5 || a2 ==5))
        {
            n[j]=i;
            j++;
        }
    }
    printf("符合条件的数字有%d个\n",j);
    for(i=0;i<j;i++)
    printf("%d  ",n[i]);
}
