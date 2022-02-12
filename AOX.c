#include "stdio.h"      /*标准输入输出文件*/
#include "stdlib.h"     /* 标准库函数*/
#include "string.h"     /* 字符串函数库*/ 
// #include "conio.h"      /* 屏幕操作函数库*/
#include "curses.h"
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
    ZGGZ gz[N];     /*定义结构体*/
    FILE *fp;       /*定义文件指针*/
    int select;     /*保存选择结果变量*/
    char ch;        /*声明字符*/
    int count=0;    /*保存文件中的记录*/

    fp=fopen("/zggz","ab+");
    if(fp==NULL)
    {
        printf("\n======>can not open file!\n");
        exit(0);        // 返回0；
    }
    while(!feof(fp))
    {
        if(fread(&gz[count],sizeof(ZGGZ),1,fp)==1)      /*一次性从文件中读取一条工资记录*/
        count++;
    }
    fclose(fp);     /*关闭文件*/
    printf("\n=====>open file sucess,the total records numbers is :%d.\n",count);
    /*调用函数*/
    getchar();
    menu();
    while (1)
    {
       system("cls");
       menu();
       printf("\n     please enter your choice(0-9):");
       scanf("%d",&select);
       if(select==0)
       {
           if(saveflag==1)
           {
               getchar();
               printf("\n==>Where save the modified record to file/(y/n):");
               scanf("%c",&ch);
               if(ch=='y'||ch=='Y')
               save(gz,count);
           }
           printf("\n====>thanks you for useness!");
           getchar();
           break;
       }
       switch(select)
       {
           case 1:count=Add(gz,count);      /*增加职工工资记录*/
           break;                           
           case 2:count=Del(gz,count);      /*删除职工工资记录*/
           break;
           case 3:Qur(gz,count);            /*查询职工工工资记录*/
           break;
           case 4:Modify(gz,count);         /*修改职工工资记录*/
           break;
           case 5:count=Insert(gz,count);   /*插入职工工资记录*/
           break;
           case 6:Tongji(gz,count);         /*统计职工工资记录*/
           break;
           case 7:Sort(gz,count);           /*排序职工工资记录*/
           break;
           case 8:Save(gz,count);           /*保存职工工资记录*/
           break;
           case 9:system("cls");            /*显示职工工资记录*/
                  Disp(gz,count);
           break;
           default:Wrong();                 /*按键盘的数据数值为0-9*/
           getchar();
           break;
       }
    } 
}
void menu()         /*主菜单*/
{
    system("cls");
    textcolor(10);
    gotoxy(10,5);
    cprintf("            The Students'  Grade Management System \n");
    gotoxy(10,8);
    cprintf("********************Menu********************\n");
    gotoxy(10,9);
    cprintf("    *  1 input record       2 delete record    *\n");
    gotoxy(10,10);
    cprintf("    * 3 search record        4 modify recorrd  *\n");
    gotoxy(10,11);
    cprintf("    * 5 insert record        6  count record    *\n");
    gotoxy(10,12);
    cprintf("    * 7 sort  record         8  save record     *\n");
    gotoxy(10,13);
    cprintf("    * 9 display  record      0 quit system      *\n");
    gotoxy(10,14);
    cprintf("**********************************************\n");
}
/*格式化输出表头*/
void printfheader()
{
    printf(HEADER1);
    printf(HEADER2);
    printf(HEADER3);
}
/*格式化输出数据*/
void printfdata(ZGGZ pp)
{
    ZGGZ *p;
    p= &pp;
    printf(FORMAT,DATA)
}
/*显示数组存储记录*/
void Disp(ZGGZ tp[],int n)
{
    int i;
    if(n==0)
    {
        printf("\n====>Not employee record!\n");
        getchar();
        return;
    }
    printf("\n\n");
    printfheader();
    i=0;
    while(i<n)
    {
        printf(HEADER3);
    }
    getchar();

}
/*输出按键盘错误信息*/
void Wrong()
{
    printf("\n\n\n\n**************Error:input has wrong! press any key to contiune*****\n");
    getchar();
}

/*输出未查找此员工信息*/
void Nofind()
{
    printf("\n============>Not find this employee record!\n");
}