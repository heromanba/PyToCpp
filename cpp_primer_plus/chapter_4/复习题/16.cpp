
// numstr.cpp -- following number input with line input;
#include <iostream>

int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    
    // // With the following statement, if input string is longer than 80
    // // "*** stack smashing detected ***: <unknown> terminated" will occur.
    // cin >> address;
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}