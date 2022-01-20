/**
 * @file stringstream.cpp
 * @author Rossetta (2441197035@qq.com)
 * @brief 对文件进行读取并保存name和phones信息，并进行格式化之后打印
 * @version 0.1
 * @date 2021-12-16
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

vector<PersonInfo> &read(istream &is, string line, string word, vector<PersonInfo> &people);
void print(vector<PersonInfo> &people);
void printWithStream(vector<PersonInfo> &people, ostream &os = cout);
bool valid(const string &nums);
string format(const string &nums);

int main()
{
    string line, word;
    vector<PersonInfo> people;
    ifstream input("../peopleinfo.txt");
    people = read(input, line, word, people);
    print(people);
    cout << endl;
    printWithStream(people);
    return 0;
}

/**
 * @brief 从输入流对象中读取name和phone信息并保存到PersonInfo中，并把所有PersonInfo保存为一个vector
 *
 * @param is -> istream &
 * @param line -> string
 * @param word -> string
 * @param people -> vector<PersonInfo> &
 * @return vector<PersonInfo> &
 */
vector<PersonInfo> &read(istream &is, string line, string word, vector<PersonInfo> &people)
{
    istringstream record;
    while (getline(is, line))
    {
        PersonInfo info;
        record.clear(); // 每次重新对record流赋值时，都要先清除其状态
        record.str(line);
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    return people;
}

/**
 * @brief 打印一个包含PeopleInfo的vector，每个PeopleInfo包含name和phone信息
 *
 * @param people -> vector<PersonInfo> &
 */
void print(vector<PersonInfo> &people)
{
    for (const auto &p : people)
    {
        cout << p.name << " ";
        for (auto &phone : p.phones)
        {
            cout << phone << " ";
        }
        cout << endl;
    }
}

/**
 * @brief 对每个PersonInfo的phones参数进行验证后并格式化输出到os
 *
 * @param people -> vector<PersonInfo> &
 * @param os -> ostream &
 */
void printWithStream(vector<PersonInfo> &people, ostream &os)
{
    for (const auto &p : people)
    {
        ostringstream formatted, badNums;
        for (const auto &nums : p.phones)
        {
            if (!valid(nums))
            {
                badNums << " " << nums;
            }
            else
                formatted << " " << format(nums);
        }
        if (badNums.str().empty())
            os << p.name << " "
               << formatted.str() << endl;
        else
        {
            cerr << "input error: " << p.name
                 << " invalid number(s) " << badNums.str() << endl;
        }
    }
}

/**
 * @brief 检验号码字符串nums是否合格
 *
 * @param nums -> const string &
 * @return true
 * @return false
 */
bool valid(const string &nums)
{
    // 如果nums是11位数字且开头为1，满足条件
    if (nums.size() == 11 && nums[0] == '1')
    {
        for (const auto &c : nums)
        {
            if (!isdigit(c))
            {
                return false;
            }
        }
        return true;
    }
    else
        return false;
}

/**
 * @brief
 *
 * @param nums -> const string &
 * @return string
 */
string format(const string &nums)
{
    string newstr(nums);
    string::const_iterator iter1 = newstr.cbegin() + 3;
    string::const_iterator iter2 = newstr.cbegin() + 7;
    newstr.insert(iter1, '-');
    newstr.insert(iter2, '-');
    return newstr; // 传入的是const，只能通过拷贝一个局部变量string并返回其值
}