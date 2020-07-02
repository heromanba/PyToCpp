
# 多态的实现

```cpp

#include <iostream>

using namespace std;

class A
{
public:
    A() : i(10) {}
    virtual void f() { cout << "A::f()" << i << endl; }

    int i;

};


int main()
{
    A a;
    a.f();
    cout << sizeof(a) << endl;

    int *p = (int*)&a;
    p += 2;
    cout << *p << endl;
}

//OUTPUT:
//A::f()10
//16
//10
```

```cpp

#include <iostream>

using namespace std;

class A
{
public:
    A() : i(10) {}
    virtual void f() { cout << "A::f()" << i << endl; }

    int i;

};


int main()
{
    A a, b;
    a.f();
    cout << sizeof(a) << endl;

    // pointer to vtable.
    int *p = (int*)&a;
    int *q = (int*)&b;
    
    // pointer to virtual function in table.
    int* x = (int*)*p;

    cout << *p << endl << *q << endl;
    cout << x << endl;
}

/*
OUTPUT:
A::f()10
16
2128174424
2128174424
0x7ed95d58
*/
```


```cpp

#include <iostream>

using namespace std;

class A
{
public:
    A() : i(10) {}
    virtual void f() { cout << "A::f()" << i << endl; }

    int i;

};

class B: public A
{
public:
    B():j(20) {}
    virtual void f() { cout << "B::f()" << j << endl; }

    int j;
};

int main()
{
    A a;
    B b;

    A* p = &b;

    p->f();
    
    // vptr并没有被传递
    a = b;

    p = &a;
    p->f();
    return 0;
}

//B::f()20
//A::f()10
```