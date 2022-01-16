#include <stdio.h>
int main()
{
    int a,b,c,t;
    int *p;
    int *q;
    int *w;
    p = &a;
    q = &b;
    w = &c;
    scanf("%d %d %d",p,q,w);
    printf("before swap\n");
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    // 数据交换
    t = *p;
    *p = *q;
    *q = *w;
    *w = t;
    printf("after swap\n");
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("a=%d,b=%d,c=%d\n",*p,*p,*p);
    
}