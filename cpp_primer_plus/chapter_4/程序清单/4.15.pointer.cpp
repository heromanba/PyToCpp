
// pointer.cpp -- our first pointer variable
#include <iostream>

int main()
{
    using namespace std;
    int updates = 6;    // declare a variable
    int * p_updates;    // declare pointer to an int
    p_updates = &updates;    // assign address of int to pointer

    // express values two ways;
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // express address two ways;
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // use pointer to change value;
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}


// OUTPUT:
// Values: updates = 6, *p_updates = 6
// Addresses: &updates = 0x7fffffffda2c, p_updates = 0x7fffffffda2c
// Now updates = 7