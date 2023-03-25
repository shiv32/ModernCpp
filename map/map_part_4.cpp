/*

std::map

--> Assign map to map2

Modifiers
erase : erases elements

*/

#include <iostream>
#include <map>

int main()
{
    // roll no., name
    std::map<int, std::string> map;

    map[100] = "Shiv";
    map[200] = "Amit";
    map[300] = "Manoj";

    std::cout << "map elements : " << std::endl;

    for (auto it = map.begin(); it != map.end(); ++it)
    {
        std::cout << "Roll No.: " << it->first << ", Name : " << it->second << std::endl;
    }

    std::cout << std::endl;
    //--------------------------------- assign map to map2 -----------------------------------------

    std::map<int, std::string> map2(map.begin(), map.end());

    std::cout << "map2 elements : " << std::endl;

    for (auto it = map2.begin(); it != map2.end(); ++it)
    {
        std::cout << "Roll No.: " << it->first << ", Name : " << it->second << std::endl;
    }

    std::cout << std::endl;
    //--------------------------------- erase --------------------------------------------------------

    auto eraseStatus = map2.erase(200);

    if (eraseStatus)
    {
        std::cout << "map2 element after remove key 200 : " << std::endl;

        for (auto it = map2.begin(); it != map2.end(); ++it)
        {
            std::cout << "Roll No.: " << it->first << ", Name : " << it->second << std::endl;
        }
    }
    else
    {
        std::cout << "key 200 not exist : " << std::endl;
    }

    std::cout << std::endl;

    eraseStatus = map2.erase(2);

    if (eraseStatus)
    {
        std::cout << "map2 element after remove key 2 : " << std::endl;

        for (auto it = map2.begin(); it != map2.end(); ++it)
        {
            std::cout << "Roll No.: " << it->first << ", Name : " << it->second << std::endl;
        }
    }
    else
    {
        std::cout << "key 2 not exist" << std::endl;
    }

    return 0;
}
