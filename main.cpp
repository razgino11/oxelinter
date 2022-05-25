#include <stdio.h>

class A
{
public:
    A() = default;
    A(int value) : _my_int(value)
    {

    }

    A(const A &other) : _my_int(other._my_int)
    {

    }

    A(A &&other) 
    {}

    A &operator=(const A &other)
    {
        return *this;
    }

    A &operator=(A &&other)
    {
        return *this;
    }

    bool operator==(const A &other)
    {
        return true;
    }

    void do_something() const 
    {
        printf("doing something\n");
    }

    bool isGood3()
    {
        return false;
    }

private:
    int _my_int;
};

int main()
{
    int WrongCase = 12;
    constexpr int ABCDE = 12;
    printf("hello world\n");
    return 0;
}