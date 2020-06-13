
// vegnews.cpp -- using new and delete with classes
// compile with strngbad.cpp
#include <iostream>
using std::cout;
#include "12.1.strngbad.h"

void callme1(StringBad &);    // pass by reference
void callme2(StringBad);    // pass by value


int main()
{
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        callme1(headline1);
        cout << "headline1: " << headline1 << endl;

        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";

        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";

        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";

    return 0;
}


void callme1(StringBad& rsb)
{
    cout << "String passed by reference:\n";
    cout << "    \"" << rsb << "\"\n";
}


void callme2(StringBad sb)
{
    cout << "String passed by value:\n";
    cout << "    \"" << sb << "\"\n";
}


// OUTPUT:
// Starting an inner block.
// 1: "Celery Stalks at Midnight" default object created
// 2: "Lettuce prey" default object created
// 3: "Spinach Leaves Bowl for Dollars" default object created
// headline1: Celery Stalks at Midnight
// headline2: Lettuce prey
// sports: Spinach Leaves Bowl for Dollars
// String passed by reference:
//     "Celery Stalks at Midnight"
// headline1: Celery Stalks at Midnight
// String passed by value:
//     "Lettuce prey"
// "Lettuce prey" object deleted, 2 left
// headline2: 
// Initialize one object to another:
// sailor: Spinach Leaves Bowl for Dollars
// Assign one object to another:
// 3: "C++" default object created
// knot: Celery Stalks at Midnight
// Exiting the block.
// "Celery Stalks at Midnight" object deleted, 2 left
// "Spinach Leaves Bowl for Dollars" object deleted, 1 left
// "���
//     V" object deleted, 0 left
// "C++" object deleted, -1 left
// "" object deleted, -2 left
// End of main()