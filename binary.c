#include <stdio.h>
/*二分查找*/
int main()
{
int a[10] = {-2,1,3,4,5,5,6,79,64,13};
int x;      /*要查找的待查数字*/
int top,int bot,int mid;        /*定义三个指示器*/
printf("input is x:\n");
scanf("%d ",&x);
top =1;bot=9;mid=(top+bot)/2;       /*指针初始化*/
while(bot > top)
{
    if(x == a[mid])
    {
       printf("the localtion is %d:\n",mid);
       break;
    }else {
        if(x >a[mid])
        {
            top =mid+1;
            mid = (top+bot)/2;
        }
    }else{
        if(x<a[mid])
        {
            top = mid-1;
            mid = (top+bot)/2;
        }
    }
    if (bot <=top)
    {
        printf("unfound is err");
        
    }
    
}

}