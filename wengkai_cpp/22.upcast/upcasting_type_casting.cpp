
#include <iostream>

using namespace std;

class A
{
public:
    int i = 10;
public:
    void print() { cout << "I'm object of A class" << endl; }
};

class B: public A
{
public:
    int j = 20;
    void print() { cout << "I'm object of B class" << endl; }
};


int main()
{
    A a;
    B b;

    A* a_ptr = &b;
    A& a_ref = b;

    a_ptr->print();
    a_ref.print();

    cout << *((int*)a_ptr) << endl;
    a_ptr++;
    cout << *((int*)a_ptr) << endl << endl;

    A a2 = (A)b;
    A* a2_ptr = &a2;
    cout << *((int*)a2_ptr) << endl;
    a2_ptr++;
    cout << *((int*)a2_ptr) << endl;
    return 0;
}


// OUTPUT:
// I'm object of A class
// I'm object of A class
// 10
// 20

// 10
// -165676652