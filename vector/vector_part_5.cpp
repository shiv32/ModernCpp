/*

 std::vector
 Modifiers

clear        : clears the contents
insert       : inserts elements
emplace      : constructs element in-place
erase        : erases elements
push_back    : adds an element to the end
emplace_back : constructs an element in-place at the end
pop_back     : removes the last element
swap         : swaps the contents

*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> mVect;

    //------------------- push_back ------------------------------------------------
    for (int i = 0; i <= 5; i++)
        mVect.push_back(i * 20);
    std::cout << "mVect push_back : ";
    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";
    //------------------------------------------------------------------------------
    std::cout << std::endl;
    //-------------------- pop_back ------------------------------------------------
    mVect.pop_back();
    std::cout << "mVect pop_back : ";
    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";
    //------------------------------------------------------------------------------
    std::cout << std::endl;
    //------------------------ insert ----------------------------------------------
    mVect.insert(mVect.begin() + 3, 200);
    std::cout << "mVect insert : ";
    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";
    //-------------------------------------------------------------------------------
    std::cout << std::endl;
    //------------------------ erase ------------------------------------------------
    mVect.erase(mVect.begin() + 3);
    std::cout << "mVect erase : ";
    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";
    //-------------------------------------------------------------------------------
    std::cout << std::endl;
    // ------------------- emplace --------------------------------------------------
    mVect.emplace(mVect.begin() + 1, 10);
    std::cout << "mVect emplace : ";
    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";
    //-------------------------------------------------------------------------------
    std::cout << std::endl;
    //-------------------- emplace_back ---------------------------------------------
    mVect.emplace_back(300);
    std::cout << "mVect emplace_back : ";
    for (auto i = mVect.begin(); i != mVect.end(); ++i)
        std::cout << *i << " ";
    //----------------------------------------------------------------------------------
    std::cout << std::endl;
    //------------------------ clear ---------------------------------------------------
    std::cout << "mVect size before clear: " << mVect.size() << std::endl;
    mVect.clear();
    std::cout << "mVect size after clear: " << mVect.size();
    //---------------------------------------------------------------------------------
    std::cout << std::endl;
    //------------------- swap --------------------------------------------------------
    std::vector<int> mVect1{10, 20}, mVect2{40, 50};
    std::cout << "mVect1 before swap  : ";
    for (int i = 0; i < mVect1.size(); i++)
        std::cout << mVect1[i] << " ";
    std::cout << std::endl
              << "mVect2 before swap : ";
    for (int i = 0; i < mVect2.size(); i++)
        std::cout << mVect2[i] << " ";
    mVect1.swap(mVect2);
    std::cout << std::endl;
    std::cout << "mVect1 after swap : ";
    for (int i = 0; i < mVect1.size(); i++)
        std::cout << mVect1[i] << " ";
    std::cout << std::endl
              << "mVect2 after swap : ";
    for (int i = 0; i < mVect2.size(); i++)
        std::cout << mVect2[i] << " ";
    //----------------------------------------------------------------------------------
    std::cout << std::endl;
    return 0;
}
