#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    using namespace std;
    srand((int)time(0));
    int myguess = rand() % 100;
    cout << myguess;
    cout << endl;
    return 0;
}
