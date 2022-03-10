#include <stdio.h>
/*选择排序算法*/
int main()
{
    int a[10] ={12,34,22,1,3,98,45,33,45,31};
    int i;      /*除了第一个最小的数字外，其余遍历*/
    int j;      /*数字下标的选择，从第二个开始*/
    int k;      /*与第一个数字或者与前面的数字的比较*/
    int tmp;   /*临时变量*/
    for(i=0;i<9;i++)
    {
        k=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j] <a[k])
            {
                k=j;
            }
        }
        tmp = a[k];
        a[k]=a[i];
        a[i]=tmp;
    }
    for(i=0;i<10;i++)
      printf("%d ",a[i]);
      
}