//#include <iostream>
//#include <cmath>
//int main() {
//    std::cout << "输入一个值，我会知道它的平方根是多少哦~~" << std::endl;
//    double a;
//    std::cin >> a;
//    double b = sqrt(a);
//    std::cout << a << "的平方根是" << b <<".~~~\n";
//    return 0;
//}

#include <iostream>
#include <cmath>
int main() {
//    using std::cout;
//    using std::cin;
//    using std::endl;
    using namespace std;
    cout << "输入一个值，我会知道它的平方根是多少哦~~" << endl;
    double a;
    cin >> a;
    double b = sqrt(a);
    cout << a << "的平方根是" << b <<".~~~\n";
    return 0;
}
