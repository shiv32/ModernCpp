
/*

weak_ptr :  std::weak_ptr is a smart pointer that holds a non-owning ("weak") reference to an object
            that is managed by std::shared_ptr.

Modifiers :
reset (public member function) : Releases the ownership of the managed object

Observers :
lock (public member function) : Creates a shared_ptr that manages the referenced object

*/

#include <iostream>
#include "smart_pointer_part_3.h"

void statusResource(std::weak_ptr<Test> &weakPtr);

int main()
{
    auto test = std::make_shared<Test>();

    std::weak_ptr<Test> weakPtr(test);

    statusResource(weakPtr);

    test.reset();

    statusResource(weakPtr);

    return 0;
}

void statusResource(std::weak_ptr<Test> &weakPtr)
{
    auto resourceStatus = weakPtr.lock();

    if (resourceStatus)
    {
        std::cout << "Resource allocated." << std::endl;
    }
    else
    {
        std::cout << "Resource released." << std::endl;
    }
}
