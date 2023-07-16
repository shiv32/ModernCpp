
/*

shared_ptr :  Smart pointer that retains shared ownership of an object through a pointer.
              Several shared_ptr objects may own the same object.

Non-member functions
make_shared  : Creates a shared pointer that manages a new object

Modifiers
reset (public member function) : Replaces the managed object

Observers
use_count (public member function) : Returns the number of shared_ptr objects
                                     referring to the same managed object


*/

#include <iostream>
#include "smart_pointer_part_2.h"

int main()
{
    std::cout << "------------------ make_shared ---------------------------------" << std::endl;

    auto test = std::make_shared<Test>();

    // retrieve the number of shared_ptr instances that are sharing the same resource
    std::cout << "test use_count : " << test.use_count() << std::endl;

    test->display();

    std::cout << "------------------ reset ---------------------------------------" << std::endl;

    test.reset(new Test); // Free resource and set to a new Test instance

    // retrieve the number of shared_ptr instances that are sharing the same resource
    std::cout << "test use_count after reset : " << test.use_count() << std::endl;

    test->display();

    std::cout << "------------------ shared_ptr test2 --------------------------" << std::endl;

    // test2 pointer points to same object whose test pointer points
    std::shared_ptr<Test> test2 = test;

    // retrieve the number of shared_ptr instances that are sharing the same resource
    std::cout << "test use_count after test2 points same object : " << test.use_count() << std::endl;

    test2->display();

    return 0;
}
