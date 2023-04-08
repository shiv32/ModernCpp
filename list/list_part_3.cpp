/*

std::list

Modifiers
clear       : clears the contents
erase       : erases elements
pop_back    : removes the last element
pop_front   : removes the first element

Capacity
size        : returns the number of elements

*/

#include <iostream>
#include <list>

int main()
{
    std::list<int> mList1;

    for (int i = 0; i < 10; ++i)
        mList1.push_back(i * 10);

    std::list<int>::iterator it;

    std::cout << "mList1 : ";

    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;

    //---------------------------- pop_back ---------------------------------
    mList1.pop_back();
    std::cout << "pop_back : ";

    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;

    //---------------------------- pop_front --------------------------------
    mList1.pop_front();
    std::cout << "pop_front : ";

    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;

    //------------------------------ erase ----------------------------------
    std::list<int>::iterator positionElement = mList1.begin();
    std::advance(positionElement, 2);
    mList1.erase(positionElement);

    std::cout << "erase : ";

    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;

    //------------------------------- clear ----------------------------------
    std::cout << "mList1 size before clear : " << mList1.size() << std::endl;
    mList1.clear();
    std::cout << "mList1 size after clear : " << mList1.size() << std::endl;

    return 0;
}
