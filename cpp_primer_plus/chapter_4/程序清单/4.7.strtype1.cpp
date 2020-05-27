
//strtype1.cpp -- using the c++ string class
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    char charr1[20];    // create an empty array.
    char charr2[20] = "jaguar";    // create an intialized array.
    string str1;    // create an empty string object.
    string str2 = "panther";    // create an initialized string.

    cout << "Enter a kind of feline: ";
    cin >> charr1;    
    cout << "Enter anthoer kind of feline: ";
    cin >> str1;    // use cin for input.
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2    // use cout for output.
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;    // use array notation.
}


// OUTPUT:
// Enter a kind of feline: ocelot
// Enter anthoer kind of feline: tiger
// Here are some felines:
// ocelot jaguar tiger panther
// The third letter in jaguar is g
// The third letter in panther is n