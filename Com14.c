#include <stdio.h>
#define FLAG 0
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    #ifdef FLAG 
    if(a>b)
    {
        int t =a;
        int a=b;
        int b = t;
    }
    if(a > c)
    {
        int t = a;
        int a =c;
        int c = t;
    }
    if (b>c)
    {
        int t = b;
        int b = c;
        int c =t;
    }
    # else
    if(a<b)
    {
        int t =a;
        int a = b;
        int b = t;
    }
    if(a < c)
    {
        int t = a;
        int a = c;
        int c = t;

    }
    if (b < c)
    {
        int t = b;
        int b = c;
        int c = t;

    }
    #endif
    printf("%d  %d  %d ",a,b,c);
}