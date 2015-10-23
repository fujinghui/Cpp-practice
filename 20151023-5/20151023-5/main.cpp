#include <iostream>
#include <cmath>
int main() {
    using namespace std;
    cout << "输入一个值，我会知道它的平方根是多少哦~~" << endl;
    double a;
    cin >> a;
    double b = sqrt(a);
    cout << a << "的平方根是" << b <<".~~~\n";
    return 0;
}
