#include "smart_pointer_part_3.h"

Test::Test()
{
    std::cout << "Test Constrcutor Called"<<std::endl;
}

Test::~Test()
{
    std::cout << "Test Destructor Called"<<std::endl;
}

void Test::display()
{
    std::cout << "display Function Called"<<std::endl;
}