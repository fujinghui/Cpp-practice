////string类的构造函数
//string(const char *s)//将string对象初始化为s指向的NBTS
//string(size_type n, char c)//创建一个包含n个元素的string对象，期中每个元素都被初始化为字符c
//string(const string &str)//复制构造函数
//string()//创建一个默认的string对象，长度为0
//string(const char *s, size_type n){//将string对象初始化为s指向的NBTS的前n个字符
//    template<class Iter> string(Iter begin, Iter end)
//    string(const string &str, string size_type pos = 0, size_type n = npos)
//    string(string &&str)noexcept
//    string(initializer_list<char> il)

#include <iostream>
#include <string>
    
    int main() {
        using namespace std;
        string one("Lottery Winner!");
        cout << one << endl;
        string two(20, '$');
        cout << two << endl;
        string three(one);
        cout << three << endl;
        one += " Oops!";
        cout << one << endl;
        two = "Sorry! That was ";
        three[0] = 'P';
        string four;
        four = two + three;
        cout << four << endl;
        char alls[] = "All's well that ends well";
        string five(alls, 20);
        cout << five << "!\n";
        string six(alls + 6, alls + 10);
        cout << six << ", ";
        string seven(&five[6], &five[10]);
        cout << seven << "...\n";
        string eight(four, 7, 16);
        cout << eight << " in motion!" << endl;
        return 0;
    }
