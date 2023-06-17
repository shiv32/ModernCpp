#ifndef TEST_1_H
#define TEST_1_H

#include <iostream>
#include <memory>

class Test
{
private:
    int x{10};

public:
    Test();
    ~Test();
    friend void display(std::unique_ptr<Test> test);
};

#endif // TEST_1_H
