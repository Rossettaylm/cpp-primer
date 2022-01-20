#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // string str;
    // cout << "Please Enter a string: " << endl;
    // getline(cin, str);
    // for (auto &c : str)
    // {
    //     c = 'X';
    // }
    // std::cout << str << std::endl;
    // return 0;
    string input, result;
    cout << "Please Enter a string: " << endl;
    getline(cin, input);
    for (auto &c : input)
    {
        if (!ispunct(c))
        {
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}