#include "friend_part_2.h"

Test::Test()
{
    std::cout << "Test Constructor Called" << std::endl;
}

Test::~Test()
{
    std::cout << "Test Destructor Called" << std::endl;
}

void display(std::unique_ptr<Test> test)
{
    std::cout << "Test x : " << test->x << std::endl;
}
