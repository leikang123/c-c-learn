#include <stdio.h>
int main()
{
    int v[]={12,15,20,22,25};
    int *p =&v;
    printf("value of v:%d\n",&p);
    printf("value of v:%d\n",*p);
    p+=1;
    printf("value of v:%d\n",&p);
    printf("value of v:%d\n",*p);
    p+=1;
    printf("value of v:%d\n",&p);
    printf("value of v:%d\n",*p);
    char s[] ={"leikang","wuhan","nanjing"};
    char *q =s;
    printf("value of s:%s\n",&q);
    printf("value of v:%c\n",*q);
    q++;
    printf("value of v:%s\n",&q);
    printf("value of v:%c\n",*q);
    q++;
    printf("value of v:%s\n",&q);
    printf("value of v:%c\n",*q);

}