
// arrfun2.cpp -- functions with an array argument
#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some systems require preceding int with static to
    // enable array intialization
    std::cout << cookies << " = array address, ";

    // some systems require a type cast: unsigned (cookies)

    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);    // a lie
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);    // another lie
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";

    // some systems require a type cast: unsigned (arr)

    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}


// OUTPUT:
// 0x7fffffffda30 = array address, 32 = sizeof cookies
// 0x7fffffffda30 = arr, 8 = sizeof arr
// Total cookies eaten: 255
// 0x7fffffffda30 = arr, 8 = sizeof arr
// First three eaters ate 7 cookies.
// 0x7fffffffda40 = arr, 8 = sizeof arr
// Last four eaters ate 240 cookies.