
/*

friend function : Can access and manipulate public, protected and private members of class. 

*/

#include "friend_part_2.h"

int main()
{
    auto test = std::make_unique<Test>();  

    display(std::move(test));

    return 0;
}
