#include <stdio.h>
int main()
{  
    // 定义数组a 
    int a[1000];
    int i;
    // 定义符合条件的个数n
    int n;
    // 定义指针p并初始化
    int *p =a;
    for(i=0;i<=100;i++)
    {
        if((i%9 ==0&&i%11 !=0)||(i%9 !=0 &&i%11 ==0))
        {
            *p++=i;
            n++;
        }
    }
    p=a;
    for(i=0;i<n;i++,p++)
    {
        if(i%5 ==0)
        {
            printf("\n");
            printf("%5d",*p);
        }
    }
}