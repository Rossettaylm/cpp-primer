#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    // istream_iterator<int> in_iter(cin);
    // istream_iterator<int> eof;
    // vector<int> vec;
    // while (in_iter != eof)
    // {
    //     vec.push_back(*in_iter++);
    // }
    // vector<int> vec(in_iter, eof); // 直接从流迭代器的范围内构造一个vector
    // std::cout << accumulate(in_iter, eof, 0) << std::endl;   // 用accumulate函数直接计算输入流迭代器范围内的累加和
    // std::cout << accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;
    vector<int> ivec = {3, 5, 3, 3, 0, 0};
    vector<int> ivec1;
    replace_copy(ivec.cbegin(), ivec.cend(), back_inserter(ivec1), 0, 1);
    copy(ivec.cbegin(), ivec.cend(), back_inserter(ivec1));
    for (auto &&i : ivec1)
    {
        std::cout << i << " " << std::ends;
    }

    return 0;
}