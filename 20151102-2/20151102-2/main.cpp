//使用new来创建动态数组，使用delete来释放该内存快
#include <iostream>
int main() {
    using namespace std;
    double *p = new double [3];
    p[0] = 0.2;
    p[1] = 0.5;
    p[2] = 0.8;
    cout << "p[1] is " << p[1] << endl;
    p = p + 1;
    cout << "after p = p + 1,now p[0] = " << p[0] << endl;
    cout << "p[1] is " << p[1] << endl;
    p = p - 1;
    delete [] p;
    return 0;
}
