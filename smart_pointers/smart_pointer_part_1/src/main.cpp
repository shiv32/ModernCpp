
/*

unique_ptr : Smart pointer that owns and manages another object 
             through a pointer and disposes of that object when 
             the unique_ptr goes out of scope. 

Non-member functions
make_unique  : Creates a unique pointer that manages a new object 

Modifiers 
reset : replaces the managed object 

move(parameter) : Allowing the efficient transfer of resources from one object to another object. 

*/

#include <iostream>
#include "smart_pointer_part_1.h"

int main()
{
    std::cout << "------------------ make_unique ---------------------------------" << std::endl;

    auto test = std::make_unique<Test>();

    test->display();

    std::cout << "------------------ reset ---------------------------------------" << std::endl;

    test.reset(new Test); // Free resource and set to a new Test instance

    test->display();

    std::cout << "------------------ Transfer ownership --------------------------" << std::endl;

    std::unique_ptr<Test> test2 = std::move(test);

    test2->display();

    return 0;
}
