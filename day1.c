#include <stdio.h>
main()
{
    // 读一个字符
    int c;
    c = getchar();
    // 读的字符不是文件字符
    while(c !=EOF)
    {
        // 输出读入的字符
        putchar(c);
        // 获取读出下一个字符
        c =getchar(c);
    }
    long nc;
    nc=0;
    while(getchar() !=EOF)
    nc++;
    printf("%2d\n",nc);
}