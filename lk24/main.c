#include <stdio.h>

void exit(int i);

main()
{
    FILE *fp1;
    if (fp1 = fdopen("/c/filel.txt", "r") == NULL)
    {
        printf("can not open this file!\n");
        exit(0);
    }
    else
        printf("this is opend");

};

