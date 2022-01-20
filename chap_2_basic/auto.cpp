// auto自动根据表达式推测类型
// decltype获取一个表达式的返回类型
#include <iostream>

int func(int a, int b);

int main()
{
    int x = 5;
    decltype(x) y = 10;
    std::cout << x + y << std::endl;

    auto p = &y;
    auto ps = &x;
    std::cout << *p + *ps << std::endl;

    auto &r = y;
    auto &rs = x;
    std::cout << r + rs << std::endl;

    decltype(func(x, y)) sum = func(x, y);
    std::cout << sum << std::endl;
    return 0;
}

int func(int a, int b)
{
    return a + b;
}