#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
    double a, b;
    std::cout << "Please Enter two number to divide:" << std::endl;
    std::cin >> a >> b;
    while (true)
    {
        try
        {
            if (b == 0)
            {
                throw runtime_error("The second number can not be 0!!!");
            }
            double result;
            result = a / b;
            std::cout << "result = " << result << std::endl;
            break;
        }
        catch (const std::runtime_error &e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "Do you want to Enter again?(y/n)" << std::endl;
            char cont;
            std::cin >> cont;
            if (cont == 'n' || !cin)
                break;
            else
            {
                std::cout << "Please enter second number again: " << std::endl;
                std::cin >> b;
            }
        }
    }

    return 0;
}
