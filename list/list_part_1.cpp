/*
std::list is a container that supports constant time insertion and removal of elements 
from anywhere in the container.
*/

#include <iostream>
#include <list>

int main()
{
	std::list<int> mList1;

	for (int i = 0; i < 10; ++i) 
		mList1.push_back(i * 10);

   	std::list<int>::iterator it;

	for (it = mList1.begin(); it != mList1.end(); ++it)
		std::cout <<" "<< *it;

    std::cout <<std::endl;

	return 0;
}
