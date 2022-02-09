// 头文件定义，库函数中
#include <stdio.h>
// 全局函数声明
void fun(int *a,int *b,int *x);
int main()
{
    int a[15] = {1,1,2,2,2,3,4,4,4,7,7,7,9,11,15};
    int b[15];
    int n,i;
    int *x;
    fun(a,b,&n);
    for(i=0;i<n;i++)
    {
        printf("%5d\n",b[i]);
        
    }
}
void fun(int *a,int *b,int *x)
{
    int i,j=0;
    b[j] = a[0];
    for(i=0;i<15;i++)
    {
        if(b[j] !=a[i])
        {
            j++;
            b[j]=a[i];
        }
    }

*x = j+1;
}