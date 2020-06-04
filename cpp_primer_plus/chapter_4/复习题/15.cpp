
#include <iostream>

struct inflatable
{
    char a;
    int b;
    float c;
};


int main()
{
    int size = 5;
    inflatable* a = new inflatable;
    a -> a = 'b';
    a -> b = 0;
    a -> c = 0.1;
    return 0;
}