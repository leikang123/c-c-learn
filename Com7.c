#include<stdio.h>
int main()
{
    int i,j;
    int n;
    int s = 0;
    int t=1;
    printf("input n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t= t*i;
        s=s+t;
    }
    printf("%d\n",s);

}