/*
Reverse iterate std::vector 
input :  0 1 2 3 4 5 6 7 8 9
output:  9 8 7 6 5 4 3 2 1 0 
*/

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> mVect;   

	for (int i = 0; i <= 9; i++)
		mVect.push_back(i);

	std::cout << "Vector : ";

	for (auto i = mVect.rbegin(); i != mVect.rend(); ++i)
		std::cout << *i << " ";

    std::cout<<std::endl;
	
	return 0;
}
