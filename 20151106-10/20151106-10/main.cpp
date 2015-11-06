//引用变量
//指针和引用
int rats = 101;
int &rodents = rats; //rodents a reference
int *prats = &rats;  //prats a pointer
表达式 rodents 和 *prats 都可以同 rats 互换
表达式 &rodents 和 prats 都可以同 &rats 互换
必须在声明引用时将它初始化
引用经常被用作函数参数
//两种swap的方法
void swapr(int &a, int &b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int *q) {
    int temp;
    
    temp = *p;
    *p = *q;
    *q = temp;
}

//两种函数的使用方法
swapr(wallet1, wallet2);
swapp(&wallet1, &wallet2);
