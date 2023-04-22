/*

std::pair                     : A pair is a specific case of a std::tuple with two elements.

make_pair (function template) : Creates a pair object of type, defined by the argument types

get (function template)       : Accesses an element of a pair

*/

#include <iostream>
#include <utility>

int main()
{
    // defining a pair(tuple) student (course, name)
    auto student_CS = std::make_pair("Computer Application", "Shiv");
    auto student_EE = std::make_pair("Electrical Engineering", "Amit");

    // detail of student_CS
    std::cout << "student_CS Course : " << std::get<0>(student_CS);
    std::cout << ", student_CS Student Name : " << std::get<1>(student_CS) << std::endl;

    // detail of student_EE
    std::cout << "student_EE Course : " << std::get<0>(student_EE);
    std::cout << ", student_EE Student Name : " << std::get<1>(student_EE) << std::endl;

    return 0;
}