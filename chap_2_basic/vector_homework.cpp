#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string word;
    char cont = 'y';
    vector<string> word_list;
    cout << "请输入第一个词：" << endl;
    while (cin >> word) // cin遇到空格就会停止读取
    {
        word_list.push_back(word);
        cout << "你要继续吗? (y/n)" << endl;
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
        {
            break;
        }
        cout << "请输入下一个词：" << endl;
    }

    cout << "输出结果为：" << endl;
    for (auto &word : word_list)
    {
        for (auto &c : word)
        {
            toupper(c);
        }
        cout << word << endl;
    }
    return 0;
}