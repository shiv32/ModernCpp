#include <iostream>
/*

std::move(parameter) (function template) :  casts an lvalue into an rvalue parameter

*/

void printCalculation(int &value)
{
    std::cout << "lvalue " << __func__ << " "
              << "called value : " << value << std::endl;
}

void printCalculation(int &&value)
{
    std::cout << "rvalue " << __func__ << " "
              << "called value : " << value << std::endl;
}

int main()
{

    int a = 10;
    int b = 20;

    printCalculation(a); // lvalue reference parameter function called

    printCalculation(std::move(a)); // rvalue reference parameter function called

    return 0;
}