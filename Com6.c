#include <stdio.h>
int main()
{
    int i,j;
    int n;
    int s =0;
    int t =1;
    printf("input n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t=1;
        for(j=0;j<=i;j++)
         t = t *j;
         s =s+t;
    }
    printf("s = %d\n",s);
}