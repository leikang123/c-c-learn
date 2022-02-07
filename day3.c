#include <stdio.h>
struct student
{
    int sno;
    char sname[10];
    int sage;
    char depmt[20];
    float cscore;
};
int main()
{
    struct student stu;
    // struct student *ps;
    // 定义指针结构体变量指向结构体变量stu首地址
    struct student *ps = &stu;
    printf("input sno:\n");
    scanf("%d",&ps->sno);
    //scanf("%d",(*ps).sno);
    printf("input snmae:\n");
    scanf("%s",(*ps).sname);
    printf("input sage:\n");
    scanf("%d",&ps->sage);
    printf("input depmt:\n");
    scanf("%s",(*ps).depmt);
    printf("input cscore:\n");
    scanf("%f",&ps->cscore);
   //  printf("%d  %s  %d  %s  %f",stu.sno,stu.sname,stu.sage,stu.depmt,stu.cscore);
    printf("%d  %s  %d  %s  %f",(*ps).sno,(*ps).sname,(*ps).sage,(*ps).depmt,(*ps).cscore);

    printf("\n");

}