
// instr1.cpp -- reading more than one string.
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your favorite dessert: \n";
    cin >> dessert;
    cout << "I have some decilious " << dessert;
    cout << " for you. " << name << ".\n";
    return 0;
}


// OUTPUT:
// Enter your name: 
// Alistair Dreeb
// Enter your favorite dessert: 
// I have some decilious Dreeb for you. Alistair.