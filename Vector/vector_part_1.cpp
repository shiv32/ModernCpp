//std::vector is a sequence container that encapsulates dynamic size arrays.

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> mVect;   

	for (int i = 0; i <= 9; i++)
		mVect.push_back(i);

	std::cout << "Vector : ";

	for (auto i = mVect.begin(); i != mVect.end(); ++i)
		std::cout << *i << " ";

    std::cout<<std::endl;
	
	return 0;
}
