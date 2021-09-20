#include <iostream>
/**
 * 动态分配内存
 * @return
 */
 using namespace std;
int  main() {
    // 声明double指针
    double * p;
    // 分配3个double数据存储空间
     p = new double [3];
     for(int i = 0;i<3;i++){
         cin >> *(p+i);
         for(int i=0;i<3;i++){
            cout <<*(p+i) << "";
     delete p;
        }
     }
}
