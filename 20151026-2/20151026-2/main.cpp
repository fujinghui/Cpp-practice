#include <iostream>
#include <string>
#include <cstring>
int main() {
    using namespace std;
    string str1;
    string str2 = "hello";
    string str3;
    cout << "please enter the string:" << endl;
    getline(cin,str3);
    str1 = str2;
    str1 += " world";
    unsigned long len1 = str1.size();
    char charr1[20] = "hdvsyu";
    unsigned long len2 = strlen(charr1);
    cout << "The string \"" << str1 << "\" contains " << len1 << " characters.\n";
    cout << "len2 = " << len2 << endl;
    cout << str3 << endl;
    cout << R"("sb->hdvsyu"="\n"=)" << endl;
    cout << R"+*(hehe"(88)"~~~~)+*";
    cout << endl;
    return 0;
}