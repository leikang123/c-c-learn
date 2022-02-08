#include <stdio.h>
int main()
{
    char *name[5]={"beijing","nannjing","shanghjai","jinagsu","sgahnj"};
    char **p = name;
    int i=0;
    for (i=0;i<5;i++,p++)
    {
        puts(*p);
        
    }
}