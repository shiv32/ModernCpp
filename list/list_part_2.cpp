/*
std::list

Modifiers
push_front : inserts an element to the beginning
insert     : inserts elements

Element access
front : access the first element
back  : access the last element

Operations
sort    : sorts the elements (ascending)
reverse : reverses the order of the elements (descending)

Iterator operations
advance (function template) : advances an iterator by given distance 

*/

#include <iostream>
#include <list>

int main()
{
    std::list<int> mList1;
    
    //---------------------------- push_front ---------------------------------------------
    for (int i = 0; i < 10; ++i)
        mList1.push_front(i * 10);

    std::list<int>::iterator it;

    std::cout << "list :";
    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;

    //----------------------------- front & back -------------------------------------------
    std::cout << "front() : " << mList1.front() << std::endl;
    std::cout << "back() : " << mList1.back() << std::endl;

    //-------------------------------- sort ------------------------------------------------
    mList1.sort();

    std::cout << "sort (ascending) :";
    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;
    //------------------------------ reverse ----------------------------------------------
    mList1.reverse();

    std::cout << "reverse (descending) :";
    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;

    //----------------------------- insert & advance ---------------------------------------
    std::list<int>::iterator insertPosition = mList1.begin();

    // iterator to point to 4th position
    advance(insertPosition, 3);

    mList1.insert(insertPosition, 11);

    std::cout << "insert :";
    for (it = mList1.begin(); it != mList1.end(); ++it)
        std::cout << " " << *it;

    std::cout << std::endl;

    return 0;
}
