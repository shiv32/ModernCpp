/*
std::map

Capacity
empty : checks whether the container is empty
size  : returns the number of elements

Modifiers
clear : clears the contents

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

    for (auto it = map.begin(); it != map.end(); ++it)
    {
        std::cout << "Roll No. : " << it->first << ", Name : " << it->second << std::endl;
    }

    std::cout << std::endl;

    if (map.empty())
    {
        std::cout << "map is empty" << std::endl;
        std::cout << "size of map : " << map.size() << std::endl;
    }
    else
    {
        std::cout << "map is not empty" << std::endl;
        std::cout << "size of map : " << map.size() << std::endl;
    }

    map.clear();

    std::cout << std::endl
              << "After clear : " << std::endl
              << std::endl;

    if (map.empty())
    {
        std::cout << "map is empty" << std::endl;
        std::cout << "size of map : " << map.size() << std::endl;
    }
    else
    {
        std::cout << "map is not empty" << std::endl;
        std::cout << "size of map : " << map.size() << std::endl;
    }

    return 0;
}
