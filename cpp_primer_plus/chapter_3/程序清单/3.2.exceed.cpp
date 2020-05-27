
// exceed.cpp -- exceeding some integer limits.
#include <iostream>
#define ZERO 0    // makes ZERO symbol for 0 value, no `;` in the end.
#include <climits>    // defines INT_MAX as largetst int value.

int main()
{
    using namespace std;
    short sam = SHRT_MAX;    // initialize a variable to max value.
    unsigned short sue = sam;    // okay if variable same already defined.
    
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
    return 0;
}

// OUTPUT:
// Sam has 32767 dollars and Sue has 32767 dollars deposited.
// Add $1 to each account.
// Now Sam has -32768 dollars and Sue has 32768 dollars deposited.
// Poor Sam!
// Sam has 0 dollars and Sue has 0 dollars deposited.
// Take $1 from each account.
// Now Sam has -1 dollars and Sue has 65535 dollars deposited.
// Lucky Sue!