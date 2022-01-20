#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

istream &function(istream &is);

int main()
{
    std::cout << "helloworld" << std::endl;
    std::cout << "请输入一些整数，按ctrl+z退出！" << std::endl;
    function(cin);
    return 0;
}

istream &function(istream &is)
{
    int input = 0;
    while (is >> input, !is.eof())
    {
        if (is.bad())
            throw runtime_error("IO流错误!");
        if (is.fail())
        {
            cerr << "数据类型错误!" << endl;
            is.clear();
            is.ignore(100, '\n'); // 跳过100个字符或者跳过回车符及其之前的字符，即忽略到行尾
            continue;
        }
        cout << input << endl;
    }

    return is;
}