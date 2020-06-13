
// arrfun2.cpp -- functions with an array argument
#include <iostream>

void f(int arr[]);

int main()
{
    int a[8] = {1, 2, 4, 8, 16, 32, 64, 128};

    // some systems require preceding int with static to
    // enable array intialization
    std::cout << a << std::endl;

    // some systems require a type cast: unsigned (cookies)

    std::cout << "sizeof a: " << sizeof a << std::endl;
    
    std::cout << "&a: " << &a << std::endl;;

    f(a);

    return 0;
}

// return the sum of an integer array
void f(int arr[])
{
    std::cout << "\narr: " << arr << std::endl;
 
    std::cout << "sizeof arr: " << sizeof arr << std::endl;
    
    std::cout << "&arr: " << &arr << std::endl;

}


// OUTPUT:
// 0x7fffffffda30 = array address, 32 = sizeof cookies
// 0x7fffffffda30 = arr, 8 = sizeof arr
// Total cookies eaten: 255
// 0x7fffffffda30 = arr, 8 = sizeof arr
// First three eaters ate 7 cookies.
// 0x7fffffffda40 = arr, 8 = sizeof arr
// Last four eaters ate 240 cookies.