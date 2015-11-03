//for循环中定义的i生存周期只在for循环中
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    for (int i = 0;i < 5;i++) {
        cout << "i = " << i << endl;
    }
    //i = 6;  //use of undeclared identifier 'i'
    return 0;
}
