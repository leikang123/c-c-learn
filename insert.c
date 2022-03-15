#include <stdio.h>
/*有序数组插入*/
int main()
{
    int a[10] = {1,3,5,7,9,11,23,44,66,23};
    int i;
    int x;
    printf("input is :/n");
    scanf("%d ",&x);
    for(i=0;i>=0;i--)
    {
        if(a[i]>x)
        {
            a[i+1] = a[i];
        }else{
           break;
        }
    }
    a[i+1] = x;
    for(i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
        
    }
}