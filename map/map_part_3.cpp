/*
std::map

Modifiers
insert : inserts elements or nodes (since C++17)

Lookup
count : returns the number of elements matching specific key
find  : finds element with specific key

Compile with C++17
g++ -std=c++17 map_part_3.cpp -o map3

*/

#include <iostream>
#include <map>

int main()
{
    std::cout << std::endl;

             // roll no., name
    std::map<int, std::string> map;

    //----------------------------- insert -------------------------------------
    map.insert(std::pair<int, std::string>(100, "Shiv"));
    map.insert(std::pair<int, std::string>(200, "Amit"));
    map.insert(std::pair<int, std::string>(300, "Manoj"));

    for (auto it = map.begin(); it != map.end(); ++it)
    {
        std::cout << "Roll No.: " << it->first << ", Name : " << it->second << std::endl;
    }

    std::cout << std::endl;
    //----------------------------- count -------------------------------------
    if (map.count(200) > 0)
    {
        std::cout << "Key is in the map value : " << map.at(200) << std::endl;
    }
    else
    {
        std::cout << "Key is not in the map" << std::endl;
    }

    if (map.count(500) > 0)
    {
        std::cout << "Key is in the map value : " << map.at(500) << std::endl;
    }
    else
    {
        std::cout << "Key is not in the map" << std::endl;
    }

    std::cout << std::endl;
    //------------------- find ------------------------------------------------
    if (auto search = map.find(200); search != map.end()) // since C++ 17
        std::cout << "Found key: " << search->first << " value : " << search->second << std::endl;
    else
        std::cout << "Not found" << std::endl;

    if (auto search = map.find(500); search != map.end()) // since C++ 17
        std::cout << "Found : " << search->first << " " << search->second << std::endl;
    else
        std::cout << "Not found" << std::endl;

    std::cout << std::endl;

    return 0;
}
