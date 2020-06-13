
#include <iostream>

class A
{
private:
    double i;
public:
    A(double x)  
    {
        i = x;
    }
};


int main()
{
    A a1(1);
    double b1 = 0.5;
    a1 + b1;
    return 0;
}