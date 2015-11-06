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
isalnum()字母数字
isalpha()字母
iscntrl()控制字符
isdigit()
isgraph()除空格之外的打印字符
islower()
isprint()打印字符（包括空格）
ispunct()
isspace()
isupper()
isxdigit()十六进制数字
tolower()如果参数是大写字符，则返回其小写，否则返回该参数
toupper()如果参数是小写字符，则返回其大写，否则返回该参数
