//std::map is a sorted associative container that contains key-value pairs with unique keys.

#include <iostream>
#include <map>

int main()
{
       //roll no., name 
std::map<int, std::string> map;

map[100] = "Shiv";
map[200] = "Amit";
map[300] = "Manoj";

for(auto it = map.begin(); it != map.end(); ++it)
{
std::cout << "Roll No.: " << it->first << ", Name : " << it->second << std::endl;
}

return 0;
}
