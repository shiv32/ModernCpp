/*
std::vector
Element access

at            : access specified element with bounds checking
[]            : access specified element
front         : access the first element
back          : access the last element
data          : direct access to the underlying array
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> mVect;

    for (int i = 0; i <= 5; i++)
        mVect.push_back(i * 20);

    std::cout <<"vector : ";

    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";

    std::cout << std::endl;

    std::cout << "vector first element : " << mVect.front() << std::endl;

    std::cout << "vector last element : " << mVect.back() << std::endl;

    std::cout << "vector element at index 3 using [] : " << mVect[3] << std::endl;

    std::cout << "vector element at index 3 using at : " << mVect.at(3) << std::endl;

    const int *mVectp = mVect.data();

    std::cout << "vector element at index 3 using data : " << mVectp[3] << std::endl;

    // bounds checking
    std::cout << "vector element at index 6 bounds checking: " << std::endl;
    std::cout << mVect.at(6) << std::endl;

    return 0;
}
