#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v;
    v = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    auto beg = v.begin(), end = v.end();
    vector<int> copyv;
    copyv.assign(beg, end);
    copyv.assign(10, 1);
    copyv.assign({1, 2, 3});
    for (auto &&i : copyv)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
