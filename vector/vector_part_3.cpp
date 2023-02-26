/*
std::vector

size()                    : returns the number of elements
resize(size_type count)   : changes the number of elements stored
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> mVect;

    for (int i = 0; i <= 5; i++)
        mVect.push_back(i);

    std::cout << "vector size(): " << mVect.size() << std::endl; // 6

    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";

    std::cout << std::endl;

    mVect.resize(4);

    std::cout << "vector size(): " << mVect.size() << std::endl; // 4

    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";

    std::cout << std::endl;

    return 0;
}
