#include <iostream>
#include <string>

using namespace std;

void print(const int array[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = end(arr) - begin(arr);
    print(arr, size);

    return 0;
}
