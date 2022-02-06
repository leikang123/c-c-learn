# include <stdio.h>
# include <string.h>
struct s_score
{
    int no;
    char name[10];
    int score[3];
};
void output(struct s_score a);
void fun(int score[]);
main()
{
    struct s_score a = {1001,"leikang",{60,70,80}};
    a.no = 1001;
    strcpy(a.name,"leikang");
    a.score[0] = 78;
    a.score[1] = 80;
    a.score[2] = 97;
    output(a);
    fun(a.score);
    output(a);
}
void output(struct s_score a)
{
    int i;
    printf("%d %s  ",a.no ,a.name );
    for(i =0;i<3;i++)
     printf("%4d",a.score[i]);
    printf("\n");

}
void fun(int score[])
{
    int i;
    for(i=0;i<3;i++)
    {
        score[i] = score[i]+10;
        if (score[i] >100)
        score [i] = 100;
    }
}
