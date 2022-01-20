#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    vector<int> ivec(array, array + 5);
    for (auto &i : ivec)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}