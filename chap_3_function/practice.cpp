/*
编写一段程序，从标准输入中读取若干string对象并查找连续出现的单词。
记录连续重复出现的最大次数以及对应的单词。
如果存在，输出最大重复出现次数以及单词；如果不存在，输出一条信息表示没有重复单词
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string word, max_string;
    vector<string> svec;
    unsigned max_count = 0;
    unsigned curr_count = 1;

    std::cout << "Please enter a series of repeated words:" << std::endl;
    // 将输入的word存入一个vector中
    while (cin >> word)
    {
        svec.push_back(word);
    }

    string pre_string("");

    // 遍历vector
    for (auto &s : svec)
    {
        // 如果当前字符串和前一个字符串相等，更新状态
        if (s == pre_string)
        {
            curr_count++;
            max_string = s;
            max_count = curr_count;
        }
        // 前一个字符串与当前字符串不相等，则置前一个字符串为当前字符串，计数置为1
        else
        {
            pre_string = s;
            curr_count = 1;
        }
    }
    std::cout << max_string << ' ' << max_count << std::endl;
    return 0;
}
