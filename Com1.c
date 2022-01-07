#include <stdio.h>
main()
{
    int i,n;
    long s=0;
    for(n=3;n<=100;n++)
    {
        for (i=2;i<n;i++)
        {
            if(n%i ==0)
            break;
        }
        if(i>n)
        {
            printf("%d ",n);
            s+=n;
        }
    }
    printf("\n");
    printf("The sum of prime number in 3~50 is :%d\n",s);
}