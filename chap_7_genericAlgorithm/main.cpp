#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <functional>
using namespace std;

/**
 * @brief 比较函数，用于count_if的predicate断言参数
 *
 * @param a
 * @return true / false
 */
bool compare(int a)
{
    return a > 2;
}

/**
 * @brief
 *
 * @param s1 常量字符串
 * @param s2 常量字符串
 * @return true 取两者之间长度较小的字符串
 * @return false
 */
bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

/**
 * @brief 判断s的字符串长度是否大于等于sz
 *
 * @param s
 * @param sz
 * @return true
 * @return false
 */
bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

/**
 * @brief 对输入的vector<string>序列进行排序并删除重复的单词
 *
 * @param svec
 */
void elimDups(vector<string> &svec)
{
    sort(svec.begin(), svec.end());
    // unique重排输入范围，使得每个单词只出现一次，返回不重复位置最后一个的尾后指针
    auto end_unique = unique(svec.begin(), svec.end());
    // 清除重复的区域
    svec.erase(end_unique, svec.end());
}

/**
 * @brief 打印vector内的所有元素，以空格分割
 *
 * @tparam elemtype
 * @param vec
 */
template <typename elemtype>
void print(const vector<elemtype> &vec)
{
    auto beg = cbegin(vec), end = cend(vec);
    for (; beg != end; ++beg)
    {
        std::cout << *beg << " " << std::ends;
    }
    std::cout << std::endl;
}

/**
 * @brief 如果ctr大于1，返回word的复数形式
 *
 * @param ctr
 * @param word
 * @param ending
 * @return string
 */
string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

/**
 * @brief 将给定字符串排序，并打印长度大于给定值的单词
 *
 * @param words
 * @param sz
 */
void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words); // 将words按字典序排列，删除重复单词

    stable_sort(words.begin(), words.end(), isShorter); // 按长度排序，长度相同的单词维持字典序
    // 采用isShorter的lambda表达式形式
    // stable_sort(words.begin(), words.end(), [](const string &a, const string &b)
    //             { return a.size() < b.size(); });

    // auto wc = find_if(words.begin(), words.end(), [sz](const string &a)
    //                   { return a.size() >= sz; }); // 获取一个迭代器，指向第一个满足size() >= sz的元素

    // lambda改用的bind函数版本，其中bind函数在头文件<functional>中
    auto wc = find_if(words.begin(), words.end(),
                      bind(check_size, std::placeholders::_1, 6));
    auto count = words.end() - wc; // 计算满足size >= sz的数目
    std::cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << std::endl;

    for_each(wc, words.end(), [](const string &s)
             { std::cout << s << " "; }); // 打印长度大于等于给定值的单词，每个单词后面接一个空格
    std::cout << std::endl;
}

int main()
{
    vector<int> vi{1, 2, 3, 4, 4, 3, 2, 1};
    int sum = 0;
    sum = count(begin(vi), end(vi), 2);
    std::cout << sum << std::endl;

    vector<string> vs{"I", " am", " Rossetta"};
    string ssum = accumulate(vs.cbegin(), vs.cend(), string(""));
    std::cout << ssum << std::endl;

    // 其中compare是一个断言(predicate)函数，用于if的条件
    std::cout << count_if(vi.cbegin(), vi.cend(), compare) << std::endl;

    vector<int> ivec;
    // back_inserter()函数返回一个output_operator指针，可以作为泛型算法的参数来指定后插入的输出位置
    auto it = back_inserter(ivec);

    // replace_copy()函数将指针范围内的容器进行参数替换，并添加到出口容器中
    std::cout << "Origin: " << std::ends;
    print(vi);

    replace_copy(vi.cbegin(), vi.cend(), it, 2, 0);
    std::cout << "After replace: " << std::ends;
    print(ivec);

    sort(begin(ivec), end(ivec));
    std::cout << "After sort: " << std::ends;
    print(ivec);

    // 排序
    vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    std::cout << "Origin strings: " << std::ends;
    print(svec);
    elimDups(svec);
    std::cout << "After elimDups: " << std::ends;
    print(svec);
    stable_sort(svec.begin(), svec.end(), isShorter); // 短字符串在前
    std::cout << "After stable_sort(isShorter): " << std::ends;
    print(svec);

    // lambda表达式
    auto f = []
    { return 42; };
    std::cout << "\n调用lambda表达式: " << std::ends;
    std::cout << f() << std::endl;

    biggies(svec, 4);

    return 0;
}
