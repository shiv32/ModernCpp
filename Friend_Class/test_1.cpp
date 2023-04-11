#include "test_1.h"

Test::Test()
{
    cout<<"Test Constructor Called"<<endl;
}

Test::~Test()
{
     cout<<"Test Destructor Called"<<endl;
}

Test2::Test2()
{
       cout<<"Test2 Constructor Called"<<endl;
}

Test2::~Test2()
{
    cout<<"Test2 Destructor Called"<<endl;
}

void Test2::mfun()
{
     cout<<"Test2 mfun Called x : "<<x<<endl;

}
