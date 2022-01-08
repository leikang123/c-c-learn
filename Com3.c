#include <stdio.h>
#define PI 3.14
int main()
{
    double s,c;
    int r = 2;
    printf("please input raduis:\n");
    scanf("%d",&r);
    s = PI*r*r;
    c = PI*2*r;
    printf("s=%f,c=%f\n",s,c);
    
}