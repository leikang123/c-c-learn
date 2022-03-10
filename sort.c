
# include <stdio.h>
/*冒泡排序算法*/
int main()
{
    int a[10] ={12,23,13,87,24,56,2,4,24,14};
    int i;      /*要比较的数字*/
    int j;      /*要比较的数字*/
    int tmp;    /*临时变量*/
      for(i=0;i<10;i++)
      {
          for(j=0;j<10-i;j++)

      {
          if (a[j] > a[j+1])
          {
            tmp = a[j];
            a[j] = a[j+1];
            a[j+1] = tmp;
          }
      }

      }
for(i=0;i<10;i++)
{
    printf("%d  ",a[i]);
}
}