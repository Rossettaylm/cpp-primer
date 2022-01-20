#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    // string line;
    // while (getline(cin, line)) // 一次读取一行
    // {
    //     cout << line << endl;
    // }

    // string word;
    // while (cin >> word)      // 一次读取一个单词，以空格结束
    // {
    //     cout << word << endl;
    // }
    string line("which one is your favorite?");
    std::cout << line.size() << std::endl;
    std::cout << line[10] << std::endl;
    std::cout << isupper(line[20]) << std::endl;
}