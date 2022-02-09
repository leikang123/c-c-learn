#include <stdio.h>
int main()
{
    int s;
    int *pi = &s;
    printf("value of pi:%p\n",pi);
    // dingyi void
    void *pv = pi;
    pi = (int *)pv;
    printf("value of pi:%p\n",pi);
    int a;
    int *pi2=&a;
    printf("value2 of pi2:%p\n",pi2);
    void *pv2 = pi2;
    pi2 = (int *)pv2;
    printf("value2-2 of pi2:%p\n",pi2);
    printf("size of *char:%d\n",sizeof(char*));
    printf("size of *int:%d\n",sizeof(int*));
    printf("size of *short:%d\n",sizeof(short*));
    printf("size of *float:%d\n",sizeof(float*));
    printf("size of *double:%d\n",sizeof(double*));
    int num;
    intptr_t *q = &num;
     printf("value num is %p\n",&num);
    printf("value q is %p\n",*q);
    
    
    
}