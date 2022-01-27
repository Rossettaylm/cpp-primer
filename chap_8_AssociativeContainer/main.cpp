#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <utility>
using namespace std;

int main()
{
    /* 计数程序 */
    // map<string, size_t> word_count;
    // string word;
    // std::cout << "Please input some words for count: " << std::endl;
    // while (cin >> word)
    // {
    //     ++word_count[word];
    // }
    // for (auto &w : word_count)
    // {
    //     std::cout << w.first << " occurs "
    //               << w.second << ((w.second != 1) ? " times" : " time") << std::endl;
    // }

    /* multiset、multimap */
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 10; ++i)
    {
        ivec.push_back(i);
        ivec.push_back(i); // 每个数重复保存一次
    }
    set<int> iset(ivec.begin(), ivec.end());
    multiset<int> miset(ivec.cbegin(), ivec.cend());
    std::cout << ivec.size() << std::endl;
    std::cout << iset.size() << std::endl;
    std::cout << miset.size() << std::endl;
    for (auto &&i : iset)
    {
        std::cout << i << " " << std::ends;
    }
    std::cout << std::endl;
    for (auto &&i : miset)
    {
        std::cout << i << " " << std::ends;
    }

    /* pair在头文件utility中 */
    pair<string, vector<int>::size_type> p("rossetta", vector<int>{1, 2, 3}.size());
    std::cout << '\n'
              << p.first << " " << p.second << std::endl;

    return 0;
}