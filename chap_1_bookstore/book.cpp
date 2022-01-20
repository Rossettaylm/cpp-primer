#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item item1, item2;
    // ISBN(string) -> units_sale(int) -> price(double)
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn())
    {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN"
                  << std::endl;
    }

    return -1;
}
