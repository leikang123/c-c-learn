#include<stdio.h>
#include <math.h>
#define  N 100
#define D (b*b-4*c*a)
int main()
{
    // define parare
    int a,b ,c;
    float x1,x2;// define root
    printf("input n\n");
    scanf("%d%d%d",&a,&b,&c);
    if(D>=0)
    {
        x1=(-b+sqrt (D))/(2*a);
        x2=(-b-sqrt (D))/(2*a);
        printf("%5.2f  %5.2f\n",x1,x2);
    }else
    {
        printf("Noot is root");
    }
}