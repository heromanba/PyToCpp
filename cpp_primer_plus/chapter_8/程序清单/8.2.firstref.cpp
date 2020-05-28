// firstref.cpp -- defining and using a reference
#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;    // rodents is a reference
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    rodents++;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    // some implementations require type casting the following
    // addresses to type unsigned;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}


// OUTPUT:
// rats = 101, rodents = 101
// rats = 102, rodents = 102
// rats address = 0x7fffffffda5c, rodents address = 0x7fffffffda5c