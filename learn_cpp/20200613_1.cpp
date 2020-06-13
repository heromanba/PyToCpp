
// array of objects.
#include <iostream>

using namespace std;

class A
{
public:
    // A();
    A(int i);
    ~A();
};

// A::A() { cout << "A来了" << endl; }s
A::A(int i) { cout << "A带着" << i << "来了" << endl; }
A::~A() { cout << "A走了" << endl; }

int main()
{
    // create an array of initialized objects
    A a_arr[3] = {A(0), A(1), A(2)};
    return 0;
}

// OUTPUT:
// A带着0来了
// A带着1来了
// A带着2来了
// A走了
// A走了
// A走了