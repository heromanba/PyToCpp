
#include <iostream>

using namespace std;

class A
{
public:
    int i;
public:
    A():i(10) {}
};

class B: public A
{
private:
    int j;
public:
    B():j(30) {}
    void f() { cout << "B.j = " << j << endl; }
};


int main()
{
    A a;
    B b;

    cout << a.i << " " << b.i << endl;

    cout << sizeof(a) << " " << sizeof(b) << endl;

    int *p = (int*)&a;

    cout << p << " " << *p << endl;

    *p = 20;

    cout << a.i << " " << endl;

    p = (int*)&b;

    cout << p << " " << *p << endl;
    
    p++;
    *p = 50;
    b.f();
    return 0;
}


// OUTPUT:
// 10 10
// 4 8
// 0x7ffcaeb18954 10
// 20 
// 0x7ffcaeb18960 10
// B.j = 50