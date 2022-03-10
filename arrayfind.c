#include <stdio.h>
/*数组元素查找*/
int main()
{
    int i;      /*遍历的元素*/
    int x;      /*要查找的元素数字*/
    int a[10]= {12,34,55,23,45,67,43,22,33,87};
    printf("input x:\n");
    scanf("%d",&x);     /*输入要查找的元素*/
    for(i=0;i<10;i++)
    {
        if(x==a[i]){
            break;
        }
    }
    if(i>=10){
        printf("not found\n");
    }else {
        printf("numnber in %d\n",i);
        
    }

}