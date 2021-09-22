#include <stdio.h>
/*定义结构体变量*/
struct  student
{
    int sno;
    char sname[10];
    int sage;
    char depmt[20];
    float cscore;
};
/*定义主函数*/
main()
{
    struct  student stu;
    struct  student *ps=&stu; /*结构体指针变量，指向stu;*/
    printf("input no:\n");
    scanf("%d",&ps->sno);
    printf("input name:\n");
    scanf("%s",&ps->sname);
    printf("input age:\n");
    scanf("%d",&ps->sage);
    printf("input department:\n");
    scanf("%s",&ps->depmt);
    printf("input  c language score:\n");
    scanf("%f",&ps->cscore);
    printf("%d %s %d %s %f\n",(*ps).sno,(*ps).sname,(*ps).sage,(*ps).depmt,(*ps).cscore);





}

