#include <stdio.h>
#define FLAG 1
 int main()
{
    char s[80];
    int i;
    gets(s);

    #if FLAG 
    for(i=0;s[i]!=0;i++)
     if(s[i] >'a' && s[i] <'z')
       s[i] = s[i]-32;
    #else 
    for(i=0;s[i] !=0;i++)
    if(s[i] >'A' && s[i] <'Z')
    s[i] =s[i]+32;
    #endif
    puts(s);
}