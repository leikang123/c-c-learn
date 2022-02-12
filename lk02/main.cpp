#include <iostream>
/*
 * 动态分配内存
 * @return
 */
 using namespace std;      // 命名空间
int  main() {
      double * p;          // 声明double型指针变量p
     p = new double [3];   // 分配3个double数据存储空间
     for(int i = 0;i<3;i++){     //遍历分配的内存空间
         cin >> *(p+i);    //输入数字
         for(int i=0;i<3;i++){      //遍历输入的数字
            cout <<*(p+i) << "";    //输出数字
     delete p;             // 释放指针
        }
     }
}
