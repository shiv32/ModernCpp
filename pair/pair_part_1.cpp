/*
std::pair is a class template that provides a way to store 
two heterogeneous objects as a single unit.
*/

#include <iostream>
#include <utility>

int main()
{
	// defining a pair student (roll no., name)
	std::pair<int, std::string> student;

	//assign value to first part of student pair
	student.first = 100;        //roll no.
	//assign value to second part of student pair
	student.second = "Shiv";   //name

	std::cout <<"Roll No. : " << student.first << " ";
	std::cout <<", Name : " << student.second << std::endl;

	return 0;
}
