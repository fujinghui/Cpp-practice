//函数模板
template <typename Anytype>
void Swap(AnyType &a, AnyType &b) {
    AnyType temp;
    temp = a;
    a = b;
    b = temp;
}
