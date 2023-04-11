//Call member fun of Test2 class from Test class object

#include <iostream>
#include "test_1.h"

using namespace std;

int main()
{
    Test *tt = new Test(); //heap

    Test2 *tt2 =  new Test2(); //heap;

    tt->display(*tt2);

    delete tt; //destroy object
    delete tt2; //destroy object

    return 0;
}
