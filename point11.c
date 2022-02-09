#include <stdio.h>
int main()
{
    int vec[] = {28,47,7};
    int *p0 = vec;
    int *p1 =vec+1;
    int *p2 =vec+2;
    // =元素位置相差值
    printf("p2-p0:%d\n",p2-p0);
    printf("p2-p1:%d\n",p2-p1);
    printf("p0-p1:%d\n",p0-p1);
    printf("*p2=:%d\n",&p2);
    printf("*p1=:%d\n",&p1);
    printf("*p2-*p0:%d\n",&p2-&p0);

}