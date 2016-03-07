set
map
vector
stack
deque
list

1.set 集合
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> a, b;
    int temp;
    for (int i = 1; i <= 10; i++) {
        cin >> temp;
        a.insert(temp);
    }
    b.insert(999);
    a.erase(2);//删除集合中的2这个元素
    
    swap(a, b);//交换集合a和集合b
    
    int count = 0;
    
    set<int>::iterator itr;
    for (itr = a.begin(); itr != a.end(); itr++) {
        count++;
        if (count == 2)
            a.erase(*itr);
    }
    
    for (itr = a.begin(); itr != a.end(); itr++) {
        cout << *itr << " ";
    }
    
    cout << endl << a.count(1) << endl;
    
    
    return 0;
}
set是个有序的集合，里面的元素不会重复。



2.map 映射
可以使用下标哦~
map提供了”[]”运算符，使得map可以像数组一样使用。所以map也称为“关联数组”
#include <iostream>
#include <map>

using namespace std;
int main() {
    map<string, int> weekname;
    weekname["MON"] = 1;
    weekname["FRI"] = 5;
    weekname["WED"] = 3;
    weekname["THU"] = 4;
    
    cout << weekname.size() << endl;
    cout << weekname["MON"] << endl;
    
    map<int, string> monthname;
    monthname[7] = "July";
    monthname[1] = "January";
    monthname[3] = "July";
    
    int temp = 2;
    string s = "hehe";
    monthname[temp] = s;
    
    cout << monthname[7] << endl;
    
    
    map<string, int>::iterator itr;
    for (itr = weekname.begin(); itr != weekname.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }
    
    
    for (auto it = monthname.begin(); it != monthname.end(); it++) {
        cout << it->first << " " << it->second << endl;
        if(it->first == 2)
            it = monthname.erase(it);
    }
    
    for (auto it = monthname.rbegin(); it != monthname.rend(); it++) {
        cout << it->first << "    " << it->second << endl;
    }
    
    for (auto it = monthname.begin(); it != monthname.end(); it++) {
        if (it ->second == "July") {
            cout << it->first << endl;
        }
    }
    
    cout << monthname.empty() << endl; //看是否为空，不为空输出0，为空输出1
    
    weekname.clear();
    return 0;
}
map是根据key值排好序的。key键值是唯一的，如果key == 2，那么对应的不可能有两个值了


3.vector 不定长数组
可以使用下标哦~
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v[0] = 0;
    
    for (int i = 0; i < 102; i++) {
        v.push_back(i);
    }
    v[123] = 123;
    cout << v[123] << endl;
    
    cout << v.size() << " " << v.empty()  << " " << v.capacity() << endl;
    //capacity是成倍增长的
    
    v.erase(v.begin() + 3);//下标为1的元素‘0’被删除了
    
    v.insert(v.begin() + 1, 999);//在第2个位置插入999这个数字
    v.insert(v.begin() + 1, 2, 8);//在第2个位置插入2个 8这个数字

    for (auto itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << " ";
    }
    
    return 0;
}



4.stack
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    for (int i = 1; i <= 10; i++) {
        s.push(i);
    }
    s.pop();
    cout << s.top() << endl;
    
    cout << s.size() << endl;
    
    for (int i = 1; i <= 9; i++) {
        cout << s.top() << " ";
        s.pop();
    }
    
    cout << endl << s.empty() << endl << s.size();
    
    return 0;
}



5.deque
#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> q;
    
    for (int i = 1; i <= 10; i++) {
        q.push_back(i);
        cout << q[i - 1] << " " << q.size() << " " << q.max_size() << endl;
    }
    
//    q.max_size()为能存储的最大值
    
    q.push_front(999);
    q.pop_back();
    
    for (int i = 0; i <= 20; i++) {
        cout << q[i] << " ";
    }

    q.pop_front();
    cout << endl << q[0] << " " << q[9] << " ";
    
    return 0;
}



6.list
#include <iostream>
#include <list>
using namespace std;
int main() {
	
	return 0;
}



