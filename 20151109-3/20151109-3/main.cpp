//string类输入
//C-风格字符串
char info[100];
cin >> info;
cin.getline(info, 100);
cin.get(info, 100);

//string类对象
string stuff;
cin >> stuff;
getline(cin, stuff);

//string版本的getline()将自动调整目标string对象的大小，使之刚好能够存储输入的字符
char fname[10];
string lname;
cin >> fname;
cin >> lname;
cin.getline(fname, 10);
getline(cin, fname);
