#include<stdio.h>
int main()
{
    int a[10] = {1,23,4,56,33,22,45,67,98,22};
    int i,j,tem;
    for(i=0;i<9;i++)
       for(j=0;j<9-i;j++)
       {
            if(a[j] >a[j+1])
            {
                tem = a[j];
                a[j] =a[j+1];
                a[j+1] =tem;

            }
        }
    
    for(i=0;i<10;i++)
       printf("%d  ",a[i]);
     
}