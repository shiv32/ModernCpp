#ifndef TEST_1_H
#define TEST_1_H

#include <iostream>
#include <memory>

class Test2;

class Test
{
public:
    Test();
    ~Test();
    void display(std::unique_ptr<Test2> test2arg);
};

class Test2
{
private:
    int x{10};
    void mfun();

public:
    Test2();
    ~Test2();
    friend class Test; // friend class
};



#endif // TEST_1_H
