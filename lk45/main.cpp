#include <iostream>
/**
 * 类模版的基础
 * @tparam T
 */
 /*ltemplate < class 类型> class 类名{}*/
template <class T> class A{
    T x,y;
public :
    A();
A(T x,T y){
}
T get(){}
T set(){}
};
int main() {
    /*类模版对象*/
    // 类名<模版实力话参数类型> 对象名（构造函数参数列表）;
   A<int> la(12,13);
   A < int> lb();
}
