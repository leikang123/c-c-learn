#include "stdio.h"      /*标准输入输出文件*/
#include "stdlib.h"     /* 标准库函数*/
#include "string.h"     /* 字符串函数库*/
#include "conio.h"      /* 屏幕操作函数库*/
#define HEADERI "--------------------ZGGz-------------------------\n"
#define HEADER2 "| number | name | jbgz | jj | kk | yfgz | sk | sfgz | \n"
#define HEADER3 "|----------|--------|--------|--------|---------|--------|---------|---------| \n"
#define FORMAT  "|%-8s|%-10s |%8.2f|%8.2f|%8.2f|%8.2f|%8.2f|%8.2f|  \n"
#define DATA      p->num,p->name,p->jbgz,p->jj,p->kk,p->yfgz,p->sk,p->sfgz
#define END     "---------------------------------------------------------- \n"
#define N 60
int saveflag=0; /*是否需要存盘的标志变量*/

/*定义与职工有关的数据结构*/
typedef struct employee 
{
    char num[10];           /*职工编号*/
    char name[10];          /*职工名字*/
    float jbgz;             /*职工工资*/
    float jj;               /*奖金*/
    float kk;               /*扣款*/
    float yfgz;             /*应发工资*/
    float sk;               /*瑞款*/
    float sfgz;             /*是发工资*/
}ZGGZ;

/*主函数*/
int main()
{
    ZGGZ gz[N];
    FILE *fp;
    int select;
    char ch;
    int count=0;
    
}