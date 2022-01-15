#include <stdio.h>
void swap(int *p,int *q);
int main()
{
    int a,b,c;
    printf("please input a b c :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        swap(&a,&b);

    }
    if(a >c)
    {
        swap(&a,&c);
    }
    if( b>c)
    {
        swap(&b,&c);
    }
    
    
        printf("%4d%4d%4d\n",a,b,c);
    
}

void swap(int *p,int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
