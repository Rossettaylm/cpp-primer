#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

void word_transform(ifstream &map_file, ifstream &input);
map<string, string> buildMap(ifstream &map_file);
const string &transform(const string &s, const map<string, string> &m);

int main()
{
    ifstream map_file("../map_file.txt");
    ifstream input("../input.txt");
    word_transform(map_file, input);
    return 0;
}

/**
 * @brief 顺序读取输入文件input的每一行，并对其进行转换和打印
 *
 * @param map_file
 * @param input
 */
void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file); // 保存转换规则
    string text;                         // 保存输入中的每一行
    while (getline(input, text))
    {
        istringstream stream(text); // 读取每个单词
        string word;
        bool firstword = true; // 控制是否打印空格
        while (stream >> word)
        {
            if (firstword)
                firstword = false;
            else
                cout << " ";                    // 在单词间打印一个空格
            cout << transform(word, trans_map); // 打印输出
        }
        cout << endl; // 完成一行的转换
    }
}

/**
 * @brief 读取map_file中的内容，建立起转换映射
 *
 * @param map_file
 * @return map<string, string>
 */
map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map; // 保存转换规则
    string key, value;             // 要替换的单词和替换后的内容是一对映射
    // 读取第一个单词存入key中，行中剩余内容存入value
    while (map_file >> key && getline(map_file, value))
    {
        if (value.size() > 1)                 // 检查是否有转换规则
            trans_map[key] = value.substr(1); // 跳过前导空格
        else
            throw runtime_error("no rule for " + key);
    }
    return trans_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
    // 实际的转换工作；此部分是程序的核心
    auto map_it = m.find(s);
    // 如果单词在转换规则map中
    if (map_it != m.cend())
        return map_it->second; // 使用替换短语
    else
        return s; // 否则返回原字符串
}