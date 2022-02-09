#include <stdio.h>
int main()
{
    int a;
    int *p;
    int **q;
    p =&a;
    q=&p;
    scanf("%d",*q);
    printf("%d   %d   %d\n",a,*p,**q);
    char *name [5]={"beijing","wuhan","tianjin","shanghai","nanjing"};
    char **p3 = name;
    int i =0;
    for(i=0;i<5;i++,p3++)
    {
        printf("%s\n",*p3);
        //printf("%s\n",(*p3+i));
    } 
    
}