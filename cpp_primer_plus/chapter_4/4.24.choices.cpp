
// choices.cpp -- array variation.
#include <iostream>
#include <vector>    // STL C++ 98
#include <array>    // C++ 11

int main()
{
    using namespace std;

    // C, original C++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};

    // C++98 STL
    vector<double> a2(4);    // create vector with 4 elements;
    // no simple way to initialize in C98;
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;

    // C++ 11 -- create and initialize array object;
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;    // valid for array objects of same size;

    // use array notation;
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    // misdeed
    // 下列代码等价：*(a1 - 2) = 20.2; 找到a1指向的地方，向前移两个double
    // 元素，并将20.2存储到目的地。即将信息存储到数组的外面。
    a1[-2] = 20.2;

    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    return 0;
}


// OUTPUT:
// a1[2]: 3.6 at 0x7fffffffda10
// a2[2]: 0.142857 at 0x555555769e80
// a3[2]: 1.62 at 0x7fffffffda30
// a4[2]: 1.62 at 0x7fffffffda50
// a1[-2]: 20.2 at 0x7fffffffd9f0
// a3[2]: 1.62 at 0x7fffffffda30
// a4[2]: 1.62 at 0x7fffffffda50