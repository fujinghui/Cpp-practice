//模块类vector
//类似于string类，是一种动态数组，是使用new创建动态数组的替代品。实际上，vector类确实使用new和delete来管理内存，而这种工作是自动完成的
#include <vector>
int main() {
    using namespace std;
    vector<int> vi;//zero-size array of int
    int n;
    cin >> n;
    vector<double> vd(n);//an array of n doubles
    //n可以是整型常量，也可以是整型变量
}
