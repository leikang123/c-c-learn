#include <stdio.h>
int fun(int n)
{
    register int s =0;
    int i;
    for(i=0;i<n;i++)
    
        s=s+i;
        return s ;
}
int main()

{
    int n;
    printf("input n:\n");
    scanf("%d",&n);
    printf("%d\n",fun(n));
}