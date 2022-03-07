#include <stdio.h>
int main()
{
    int a[10];      /*声明数组啊10个数字*/
    int i;          /*要输入的数字*/
    int max;        /*最大值*/
    int min;        /*最小值*/
    int maxp;       /*最大值所在的下标*/
    int minp;       /*最小值所在的下标*/
    printf("请输入首个数字:\n");
    scanf("%d",&a[0]);
    max=a[0];
    maxp=0;
    min=a[0];
    minp=0;
    for(i=1;i<=10;i++)
    {
        printf("please input no %d data:\n",i);
        scanf("%d",&a[i]);
        if(a[i] > max)
{
max=a[i];
maxp=i;
}   
if(a[i] <min)
{
    min=a[i];
    minp=i;
}
 }

printf("最大值为第%d个数,值为:%d\n",maxp,max);
printf("最小值为第%d个数；值为:%d\n",minp,min);
}