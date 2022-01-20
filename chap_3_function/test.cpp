#include <iostream>
using namespace std;

int main()
{
    int a = 42;
    const int *p = &a;
    int *const pc = &a;
    std::cout << *p << ' ' << *pc << std::endl;
    return 0;
}