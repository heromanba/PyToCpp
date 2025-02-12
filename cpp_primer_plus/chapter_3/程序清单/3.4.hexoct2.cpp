
// hexoct2.cpp -- display values in hex and octal

#include <iostream>
using namespace std;

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;    // manipulator for changing number base;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}


// OUTPUT:
// Monsieur cuts a striking figure!
// chest = 42 (decimal for 42)
// waist = 2a (hexadecimal for 42)
// inseam = 52 (octal for 42)