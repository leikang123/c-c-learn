#include <stdio.h>
int max(int a,int b);
int main()
{
    int n1,n2,max1;
    // 定义指针函数fp
    int (*fp)();
    // 函数指针指向max函数
    fp = max;
    printf("input two number:\n");
    scanf("%d%d",&n1,&n2);
    // 指针函数把值赋给函数max1;就是调用指针函数
    max1=(*fp)(n1,n2);
    printf("max=%d\n",max1);
}
int max(int a,int b)
{
    return (a>b?a:b);
    
}
