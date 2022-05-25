#include <stdio.h>

class A
{
public:
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