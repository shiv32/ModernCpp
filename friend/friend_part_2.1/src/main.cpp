
/*

unique_ptr : scope

*/

#include "friend_part_2.h"

int main()
{
    auto test = std::make_unique<Test>();

    display(std::move(test));

    std::cout << "End of "<<__func__ << std::endl;

    return 0;
}
