#include <iostream>
#include <cstddef>

using namespace std;

int call_count();

int main()
{
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << call_count() << std::endl;
    }

    return 0;
}

int call_count()
{
    static int count = 0;
    return ++count;
}