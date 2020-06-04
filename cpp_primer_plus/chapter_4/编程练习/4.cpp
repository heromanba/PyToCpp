
#include <iostream>
#include <string>


int main()
{
    using namespace std;

    string first_name;
    string last_name;
    string whole_name;

    cout << "Enter your first name: " << endl;
    getline(cin, first_name);

    cout << "Enger you last name: " << endl;
    getline(cin, last_name);

    cout << "Here's the information in a single string:" << endl;

    whole_name = last_name + ","+ first_name;

    cout << whole_name << endl;

    return 0;
}