#include <iostream>
/*

lvalue reference parameter : &
rvalue reference parameter : &&

*/

void printCalculation(int & value)
{
    std::cout << "lvalue " << __func__ << " "
              << "called value : " << value << std::endl;
}

void printCalculation(int && value)
{
    std::cout << "rvalue " << __func__ << " "
              << "called value : " << value << std::endl;
}

int main()
{

    int a = 10;
    int b = 20;

    printCalculation(a); // lvalue reference parameter function called

    printCalculation(a + b); // rvalue reference parameter function called

    return 0;
}