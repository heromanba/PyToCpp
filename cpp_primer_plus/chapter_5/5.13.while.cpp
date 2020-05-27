
// while.cpp -- introducing the while loop
#include <iostream>

const int ArSize = 20;

int main()
{
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized\n";
    int i = 0;    // start at the begging of string
    while (name[i] != '\0')    // process to end of string
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;    // don't forget this step.s
    }
}


// OUTPUT:
// Your first name, please: heromanba
// Here is your name, verticalized and ASCIIized
// h: 104
// e: 101
// r: 114
// o: 111
// m: 109
// a: 97
// n: 110
// b: 98
// a: 97