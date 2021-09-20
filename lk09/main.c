#include <stdio.h>

main()
{
    /*定义各个面值的的数量*/
    int n1,n2,n3,n4,n5;
    /*定义s代表总钱数*/
    float s;
    /*定义s1,s2,s3 */
    int s1,s2,s3;
    printf("输入1分钱的数量：\n");
    scanf("%d",&n1);
    printf("输入2分钱的数量：\n");
    scanf("%d",&n2);
    printf("输入5分钱的数量：\n");
    scanf("%d",&n3);
    printf("输入1角钱的数量：\n");
    scanf("%d",&n4);
    printf("输入5角钱的数量：\n");
    scanf("%d",&n5);
    s=n1*0.01+n2*0.02+n3*0.05+n4*0.1+n5*0.5;
    printf("s=%f\n",s);


}
