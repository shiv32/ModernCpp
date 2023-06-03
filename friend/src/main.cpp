// Call member fun of Test2 class from Test class object

#include <iostream>
#include "friend_class_part_1.h"

int main()
{
    auto test = std::make_unique<Test>();

    auto test2 = std::make_unique<Test2>();

    test->display(std::move(test2));

    return 0;
}
