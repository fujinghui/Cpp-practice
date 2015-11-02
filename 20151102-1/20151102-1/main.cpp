//使用new动态分配内存
//使用delete释放内存
#include <iostream>
int main() {
    using namespace std;
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;
    cout << "nights value = " << nights << ":location " << &nights << endl;
    cout << "int value = " << *pt << ":location = " << pt << endl;
    double *pd = new double;
    *pd = 10000001.0;
    cout << "double value = " << *pd << ":location = " << pd << endl;
    cout << "location of pointer pd:" << &pd << endl;
    cout << "size of pt = " << sizeof(pt) << endl;
    cout << "size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd)<< endl;
    cout << "size of *pd = " << sizeof(*pd) << endl;
    delete pt;//释放pt所指向的内存，而不会删除指针pt本身。一定要配对使用new和delete，否则将发生内存泄露。
    delete pd;
    return 0;
}
