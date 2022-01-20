#include <iostream>

extern const int bufsize = 512;

int main(int argc, char const *argv[])
{
    int a = 1;
    int &b = a;
    int *pb = &b;
    int **ppb = &pb;
    int *&r = pb;
    std::cout << *pb << std::endl;
    std::cout << **ppb << std::endl;
    std::cout << *r << std::endl;
    constexpr int x = 1;
    std::cout << x << std::endl;
    int *y = 0;
    std::cout << y << std::endl;
    return 0;
}
