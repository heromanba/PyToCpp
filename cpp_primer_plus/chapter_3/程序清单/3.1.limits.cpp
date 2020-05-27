
// limits.cpp -- some integer limits;
#include <iostream>
#include <climits>    // use limits.h for older systems.

int main() 
{
    using namespace std;
    int n_int = INT_MAX;    // initialize n_int to max int value;
    short n_short = SHRT_MAX;    // symbols defined in climits file.
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable;
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_long << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

}


// OUTPUT:

// int is 4 bytes.
// short is 2 bytes.
// long is 8 bytes.
// long long is 8 bytes.

// Maximum values: 
// int: 2147483647
// short: 32767
// long: 9223372036854775807
// long long: 9223372036854775807

// Minimum int value = -2147483648
// Bits per byte = 8