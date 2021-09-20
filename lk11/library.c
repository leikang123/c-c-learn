

#include <stdio.h>
main()
{
    int a,b,c,max;
    printf("input a,b,c :\n");
    scanf("%d%d%d",&a,&b,&c);
    max = a;
    if ( b > max)
        max = b;
    if ( c > max)
        max = c;
    printf("The max value is %d \n",max);
}
