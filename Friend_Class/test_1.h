#ifndef TEST_1_H
#define TEST_1_H

#include <iostream>
using namespace std;

class Test2
{
private:
    int x = 10;

public:
    Test2();
    ~Test2();
    void mfun();

    friend class Test; //friend class
};

class Test
{
public:
    Test();
    ~Test();
    void display(Test2 &t)
    {
        t.mfun();
    }

private:
    //~Test();   //work
    // Test();  //constructor can not be private
};


#endif // TEST_1_H

