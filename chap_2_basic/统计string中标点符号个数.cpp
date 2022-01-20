#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str("Hello, world!!!");
    decltype(str.size()) punct_cnt = 0; // 令punct_size类型和str.size一样
    for (auto c : str)                  // 当想要改变str中的字符值时，c需要为引用
    {
        if (ispunct(c))
            punct_cnt++;
    }
    std::cout << punct_cnt << " punctuation characters in " << str << std::endl;
    return 0;
}
