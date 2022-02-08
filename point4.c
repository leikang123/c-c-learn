#include <stdio.h>
int main()
{
    char *p = "hello!";
    for(;*p!=0;p++)
    {
        printf("%c",*p);

    }
printf("\n");
char *p2 = "well love china";
int j;
for(j=0;p2[j]!=0;j++){
    printf("%c\n",*(p2+j));
}
printf("\n");


}