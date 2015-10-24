#include <iostream>
#include <climits>
int main() {
    using namespace std;
    int a = INT_MAX;
    cout << a << endl;
    cout << a + 1 << endl;
    cout << LONG_MAX + 1 << endl;
    cout << INT_MIN - 1 << endl;
    a = a + 2;
    cout << a << endl;
    int b = 42;
    cout << "b = " << b << endl;
    cout << hex;
    cout << "hex -> b = " << b << endl;
    cout << oct;
    cout << "oct -> b = " << b << endl;
    char t = 'A';
    cout.put(t);
    return 0;
}