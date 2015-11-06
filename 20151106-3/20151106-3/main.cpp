//字符函数库cctype
//使用isalpha()来检查字符是否为字母字符
//使用isdigits()来测试字符是否为数字字符
//使用isspace()来测试字符是否为空白（空格、换行符和制表符）
//使用ispunct()来测试字符是否为标点符号
#include <iostream>
#include <cctype>
int main() {
    using namespace std;
    cout << "Enter text for analysis, and type @ to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    
    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if(ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, "
    << whitespace << " whitespace, "
    << digits << "digits, "
    << punct << " punctuations. "
    << others << " others.\n";
    return 0;
}
