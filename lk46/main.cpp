#include <iostream>
using namespace  std;
template <class T> class A{
    T a,b,c,d;
    T Max(T a,T b){
        return (a>b)? a:b ;
    }
public :
    Max4(T,T,T,T);
    T Max(void);
};
// 声明模版定义成员函数
template<class T>
Max4 <T> :: Max4(T x1,T x2,T x3,T x4):a(x1),b(x2),c(x3),d(x4){

}
template <class T>
T Max4<T>:: Max(void){
    return Max(Max(a,b),Max(c,d));
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
