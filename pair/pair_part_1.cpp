/*
std::pair is a class template that provides a way to store
two heterogeneous objects as a single unit.
*/

#include <iostream>
#include <utility>

int main()
{
    // defining a pair student (course, name)
    std::pair<std::string, std::string> student;

    // assign value to first part of student pair
    student.first = "Computer Application"; // course

    // assign value to second part of student pair
    student.second = "Shiv"; // name

    // detail of student
    std::cout << "Course : " << student.first;
    std::cout << ", Student Name : " << student.second << std::endl;

    // assign value to second part of student pair
    student.second = "Amit"; // name

    // detail of student
    std::cout << "Course : " << student.first;
    std::cout << ", Student Name : " << student.second << std::endl;

    // assign value to second part of student pair
    student.second = "Manoj"; // name

    // detail of student
    std::cout << "Course : " << student.first;
    std::cout << ", Student Name : " << student.second << std::endl;

    return 0;
}