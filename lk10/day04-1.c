#include <stdio.h>
main()
{
    float price,area;
    float pcost,total;
    float tax,tcost;
    printf("please input price :\n");
    scanf("%f",&price);
    printf("please input pcost :\n");
    scanf("%f",&area);
    printf(" please input pcost :\n");
    scanf("%f",&pcost);
    printf("please input total :\n");
    scanf("%f",&total);
    printf("please input tax :\n");
    scanf("%f",&tax);
    printf("please input tcost :\n");
    scanf("%f",&tcost);
    total = price*area;
    tax = tcost*12;
    printf("%f",total+tcost+tax);



}
