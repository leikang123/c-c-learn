#include <stdio.h>
int main()
{
    // 定义二维数组3行4列
    int a[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
    int *q ;
     q = &a[0][1];
    printf("%d\n",*(q+3));
    // 定义行指针
    int (*p)[4]=a;
    // 定义行和列
    int i,j;
    // 遍历行和列
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++){
            // 输出行列数组
            printf("%3d",*(*(p+i)+j));
        }
        printf("\n");
    }
}