//基于范围的for循环
double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.97};
for (double x : prices)
cout << x << std:endl;

//修改数组元素
for (double &x : prices)
x = x * 0.80;

//基于范围的for循环和初始化列表
for (int x : {3, 5, 2, 8, 6})
cout << x << " ";
cout << '\n';
