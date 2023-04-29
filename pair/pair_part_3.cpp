/*

std::pair                     : tuple

tie (function template)       : Creates a tuple of lvalue references or unpacks a tuple into individual objects

ignore (constant)             : Placeholder to skip an element when unpacking a tuple using tie

*/

#include <iostream>
#include <utility>
#include <tuple> //tie

int main()
{

    // defining a pair(tuple) student (course, name)
    auto student_CS = std::make_pair("Computer Application", "Shiv");
    auto student_EE = std::make_pair("Electrical Engineering", "Amit");

    //-------------------------------- tie & ignore --------------------------------
    std::cout << "------------------- tie & ignore ---------------------" << std::endl;

    std::string courseName, studentName;

    std::tie(courseName, studentName) = student_CS;

    // detail of student
    std::cout << "student_CS Course : " << courseName;
    std::cout << ", student_CS  Student Name : " << studentName << std::endl;

    tie(courseName, std::ignore) = student_EE;

    // detail of student
    std::cout << "student_EE Course : " << courseName;
    std::cout << ",student_CS Student Name : " << studentName << std::endl;

    return 0;
}