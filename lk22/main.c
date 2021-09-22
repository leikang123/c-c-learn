#include <stdio.h>
#define PI 3.14
main()
{
    int r =3;
    float s,c;

    printf("input radius:\n");
    scanf("%d",&r);
    s = PI*r*r;
    c = 2*PI*r;
    printf("s=%f,c=%f\n",s,c);

}

