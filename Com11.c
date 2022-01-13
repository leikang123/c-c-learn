#include <stdio.h>
#define F(x,y) x*x+y*4
int main()
{
    int a,b;
    int s;
    s = F(a,b)+F(a,b)*F(a,b);
    printf("%d",s);
    
}