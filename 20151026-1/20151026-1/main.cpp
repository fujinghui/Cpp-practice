#include <iostream>
int main() {
    using namespace std;
    int a[] = {1,2,3};
    int b = sizeof(a) / sizeof(int);
    cout << b << endl;
    const int MaxSize = 30;
    char A[MaxSize];
    char B[MaxSize];
    char C[MaxSize];
    char D[MaxSize];
    cout << "Hello!~~" << endl;
    cin.getline(A,MaxSize);
    cout << "Fine,thank you~~" << endl;
    cin.getline(B,MaxSize);
    cout << "I am fine,too~~~" << endl;
    
    cin.get(C,MaxSize).get();
    cin.get(D,MaxSize);
    cout << A << B << C << D << endl;
    return 0;
}
