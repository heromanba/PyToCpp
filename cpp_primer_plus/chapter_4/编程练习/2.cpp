
// instr2.cpp -- reading more than one word with getline
#include <iostream>
#include <string>


int main()
{
    using namespace std;
    // const int ArSize = 20;
    // char name[ArSize];
    // char dessert[ArSize];

    // cout << "Enter your name: \n";
    // cin.getline(name, ArSize);    // reads through newline.
    // cout << "Enter your favorite dessert: \n";
    // cin.getline(dessert, ArSize);
    // cout << "I have some delicious " << dessert;
    // cout << " for you, " << name << ".\n";


    string name;
    string dessert;

    cout << "Enter your name: \n";
    getline(cin, name);    // reads through newline.
    cout << "Enter your favorite dessert: \n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    
    return 0;
}
