#include <stdio.h>
# define N 10
struct student
{
    int no;
    char name[10];
    int score;

};
int fun(struct student s[],struct student b[],int m,int n);
void  output(struct student x[],int n);
int main()
{
    struct student s[N] = {{1001,"zhangsan",34},{1002,"leilei",45},{1003,"lili",98},{1004,"wanglao",23},
    {1005,"ert",98},{1007,"juju",56},{1008,"fufu",67},{1009,"huhu",74},{1010,"koko",55}};
    int m,n,k;
    // 数据存储的成绩范围
    struct student a[N];
    printf("please input range in m,n\n");
    scanf("%d%d",&m,&n);
    printf("The original data:\n");
    output(s,N);
    k=fun(s,a,m,n);
    printf("The student that score in %d & %d is :\n",m,n);
    output(a,k);
}
int fun(struct student s[],struct student b[],int m,int n)
{
    int i,k=0;
    for(i=0;i<N;i++)
    {
        if(s[i].score >=m && s[i].score <=n)
        b[k++] = s[i];
    }
    return k;
}
void output(struct student x[],int n)
{
    int i;
    printf("no      name  score\n");
    for(i=0;i<n;i++)
     printf("%d   %10s  %d\n",x[i].no ,x[i].name,x[i].score);
     printf("\n");
}