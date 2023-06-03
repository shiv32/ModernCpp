
/*

friend class : can access public, protected and private data members and methods. 

*/


#include <iostream>
#include "friend_class_part_1.h"

int main()
{
    auto test = std::make_unique<Test>();

    auto test2 = std::make_unique<Test2>();

    test->display(std::move(test2));

    return 0;
}
