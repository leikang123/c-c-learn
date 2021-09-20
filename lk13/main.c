#include <stdio.h>

main(){
    int a,b,c;
    printf("input the length of triangle : \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("Can of triangle!");
    } else{
        printf("Can not of triangle");
    }
}
