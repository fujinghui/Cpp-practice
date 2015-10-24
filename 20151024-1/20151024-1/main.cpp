#include <iostream>
#include <climits>
int main() {
    using namespace std;
    cout << "bytes and Maximum values:\n";
    cout << "int:" << sizeof(int) << " and " << INT_MAX << endl;
    cout << "short:" << sizeof SHRT_MAX << " and " << SHRT_MAX << endl;
    cout << "long:" << sizeof LONG_MAX << " and " << LONG_MAX << endl;
    cout << "longlong:" << sizeof LLONG_MAX << " and " << LLONG_MAX << endl;
    cout << "Minimum int value = " << INT_MIN << endl;
    return 0;
}
