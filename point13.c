#include <stdio.h>
int main()
{
    char a ='l';
    puts(&a);
    putchar(a);
    putchar(a+2);
    putchar('\n');   // 字符的结尾处，占据一个内存的字节空间
    char c1,c2;
    printf("input 2 character:");
    c1=getchar();
    c2 =getchar();
    putchar(c1);
    putchar(c2);
    putchar('\n');
    
}