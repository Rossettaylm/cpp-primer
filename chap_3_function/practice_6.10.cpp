#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void swap(int *pa, int *pb);
void func(string &str);

int main()
{
    int a, b;
    std::cout << "Please input two number:" << std::endl;
    cin >> a >> b;
    std::cout << "Origin: " << a << ' '
              << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap: " << a << ' '
              << b << std::endl;
    string greeting("H e l l o w o r l d!");
    func(greeting);
    std::cout << greeting << std::endl;
    return 0;
}

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void func(string &str)
{
    auto beg = str.begin(), end = str.end();
    for (; beg != end; ++beg)
    {
        if (isspace(*beg))
        {
            for (int i = 1; i <= end - beg; ++i)
            {
                *(beg + i - 1) = *(beg + i);
            }
        }
    }
}