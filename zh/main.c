#include <stdio.h>
main()
{
    int a,*pa;
    float b,*pb;
    char c,*pc;
    double d,*pd;
    pa = &a;
    pb =&b;
    pc =&c;
    pd =&d;
    scanf("%d%f%c%1f\n",pa,pb,pc,pd);
    printf("%d  %f %c %f\n",*pa,*pb,*pc,*pd);
}

