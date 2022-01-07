#include<stdio.h>
int main()
{
    int i,j,k,n=0;
    printf("red ball bule ball white ball\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            k=8-i-j;
            if(k>=0 && k<=5)
            {
                n++;
                printf("%d  %d  %d\n",i,j,k);

            }else{
                break;
            }
        }
    }
    printf("There are %d kind of possitoon\n",n);

}