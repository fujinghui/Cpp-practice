//第八章 函数探幽
//新特性包括内联函数、按引用传递变量、默认的参数值、函数重载(多态)以及模板函数
在内联函数前加上inline
省略原型，将整个定义（即函数头和所有函数代码）放在本应提供原型的地方
#include <iostream>
inline double sqare(double x){return x * x;};
int main() {};
