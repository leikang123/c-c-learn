#include <stdio.h>
int main()
{
    char s[] = "leikang";
    char *s2 =s;
    for(;*s2!=0;s2++){
        printf("%c\n",*s2);
        
    }
    // 获取指针变量的元素值，必须使用%C 
    printf("%c\n",*(s2+3));
    char *p = "hello";
    printf("%s\n",p);
    
    
}