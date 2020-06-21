
#include <iostream>

using namespace std;

class A
{
public:
    int i = 10;
public:
    virtual void print() { cout << "I'm object of A class" << endl; }
};

class B: public A
{
public:
    int j = 20;
    virtual void print() { cout << "I'm object of B class" << endl; }
};

// 通用函数
void call_print(A* a)
{
    /*
    通过指针或引用调对应的函数，可以是A，也可以是A的子类，因为print是virtual的。
    在这里a是多态的，有时被叫做多态对象。
    多态建立在两件事情的基础上：upcast和dynamic binding。
    */
    a->print();    // 
}

int main()
{
    A a;
    B b;

    call_print(&a);
    call_print(&b);    // upcast.
    return 0;
}


// OUTPUT:
// I'm object of A class
// I'm object of B class