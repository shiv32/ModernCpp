/*

std::pair                     : tuple 

swap (public member function) : Swaps the contents

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


    //-------------------------------- swap -----------------------------------------
    std::cout << "------------------- swap ---------------------" << std::endl;

    student_CS.swap(student_EE);

    // detail of student_CS
    std::cout << "student_CS Course : " << std::get<0>(student_CS);
    std::cout << ", student_CS Student Name : " << std::get<1>(student_CS) << std::endl;

    // detail of student_EE
    std::cout << "student_EE Course : " << std::get<0>(student_EE);
    std::cout << ", student_EE Student Name : " << std::get<1>(student_EE) << std::endl;

    return 0;
}