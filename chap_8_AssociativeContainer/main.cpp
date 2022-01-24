#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
    {
        ++word_count[word];
    }
    for (auto &w : word_count)
    {
        std::cout << w.first << " occurs "
                  << w.second << ((w.second != 1) ? " times" : " time") << std::endl;
    }

    return 0;
}