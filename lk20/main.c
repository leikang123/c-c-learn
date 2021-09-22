#include <stdio.h>
main()
{
    char ch[20];
    for(int i=0;i<20;i++)
    {
        ch[i] = getchar();
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        }
    }
        for (int i=0;i<20;i++)

            printf("%c",ch[i]);
            printf("\n");


}