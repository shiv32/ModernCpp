/*

std::pair                     : A pair is a specific case of a std::tuple with two elements.

make_pair (function template) : Creates a pair object of type, defined by the argument types

get (function template)       : Accesses an element of a pair

swap (public member function) : Swaps the contents

tie (function template)       : Creates a tuple of lvalue references or unpacks a tuple into individual objects

ignore (constant)             : Placeholder to skip an element when unpacking a tuple using tie

*/

#include <iostream>
#include <utility>
#include <tuple> //tie

int main()
{
    //------------------------------ make_pair & get -------------------------------
    std::cout << "------------------- make_pair & get ---------------------" << std::endl;

    // defining a pair(tuple) student (course, name)
    auto student_CS = std::make_pair("Computer Application", "Shiv");
    auto student_EE = std::make_pair("Electrical Engineering", "Amit");

    // detail of student_CS
    std::cout << "student_CS Course : " << std::get<0>(student_CS);
    std::cout << ", student_CS Student Name : " << std::get<1>(student_CS) << std::endl;

    // detail of student_EE
    std::cout << "student_EE Course : " << std::get<0>(student_EE);
    std::cout << ", student_EE Student Name : " << std::get<1>(student_EE) << std::endl;

    //-------------------------------- tie & ignore --------------------------------
    std::cout << "------------------- tie & ignore ---------------------" << std::endl;

    std::string courseName, Student;

    std::tie(courseName, Student) = student_CS;

    // detail of student
    std::cout << "student_CS Course : " << courseName;
    std::cout << ", student_CS  Student Name : " << Student << std::endl;

    tie(courseName, std::ignore) = student_EE;

    // detail of student
    std::cout << "student_EE Course : " << courseName;
    std::cout << ",student_CS Student Name : " << Student << std::endl;

    //-------------------------------- swap -----------------------------------------
    std::cout << "------------------- swap ---------------------" << std::endl;
    student_CS.swap(student_EE);

    // detail of student
    std::cout << "student_CS Course : " << std::get<0>(student_CS);
    std::cout << ", student_CS  Student Name : " << std::get<1>(student_CS) << std::endl;

    return 0;
}