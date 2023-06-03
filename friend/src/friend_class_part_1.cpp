#include "friend_class_part_1.h"

Test::Test()
{
    std::cout << "Test Constructor Called" << std::endl;
}

Test::~Test()
{
    std::cout << "Test Destructor Called" << std::endl;
}

void Test::display(std::unique_ptr<Test2> test2)
{
    test2->mfun();
}

Test2::Test2()
{
    std::cout << "Test2 Constructor Called" << std::endl;
}

Test2::~Test2()
{
    std::cout << "Test2 Destructor Called" << std::endl;
}

void Test2::mfun()
{
    std::cout << "Test2 mfun Called x : " << x << std::endl;
}
