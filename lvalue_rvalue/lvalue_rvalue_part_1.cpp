#include <iostream>
/*

lvalue : Named variables, which has address, it appears at left hand side of assignment operator
rvalue : Which is not lvalue, it appears at right hand side of assignment operator

*/

int main()
{

int lvalue = (10 + 20); // (10+20) is rvalue, temporary value

std::cout<<"address lvalue : "<<&lvalue<<std::endl;

//compiler error
//std::cout<<"address rvalue :"<<&(10 + 20)<<std::endl;

 return 0;   
}