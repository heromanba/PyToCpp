
// arraynew.cpp -- using the new operator for arrays
#include <iostream>

int main()
{
    double * p3 = new double [3];    // space for 3 doubles;
    p3[0] = 0.2;    // treat p3 like array name;
    p3[1] = 0.5;
    p3[2] = 0.8;

    std::cout << "p3[1] is " << p3[1] << ".\n";

    // okay for pointers, wrong for array names;
    p3 = p3 + 1;    // increment the pointer;

    std::cout << "Now p3[0] is " << p3[0] << " and ";
    std::cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;    // point back to beginning;
    
    delete [] p3;    // free the memory;
    
    return 0;
}


// OUTPUT:
// p3[1] is 0.5.
// Now p3[0] is 0.5 and p3[1] is 0.8.

// 程序说明:
// p3 可以被当做数组名来使用，p3[0]为第1个元素，以此类推；
// 不能修改数组名的值，但指针是变量，因此可以修改它的值；