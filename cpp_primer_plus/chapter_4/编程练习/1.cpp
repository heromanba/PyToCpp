
#include <iostream>
#include <string>


int main()
{
    using namespace std;

    cout << "What is your first name?" << endl;
    string first_name;

    // cin now an argument; no length specifier;
    // getline is a function in std not a method.
    getline(cin, first_name);

    cout << "What is your last name?" << endl;

    string last_name;
    getline(cin, last_name);

    cout << "What letter grade do you deserve?" << endl;
    char deserve_grade;
    cin >> deserve_grade;

    cout << "What is your age?" << endl;
    int age;
    cin >> age;

    cout << "Name: " << last_name << "," << first_name << endl;

    cout << "Grade: " << (char)(deserve_grade + 1) << endl;

    cout << "Age: " << age << endl;
    return 0;
}