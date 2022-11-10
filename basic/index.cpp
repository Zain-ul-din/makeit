#include <iostream>
#include "./helper.hpp"

// Driver code
int main (int argc, char* argv[])
{
    std::cout << "Hello C-Make using clang++\n";
    int num1 = 10, num2 = 20;
    std::cout << "Sum : " << addToNumbers (num1, num2);
    std::cin.get ();
    return 0;
}



