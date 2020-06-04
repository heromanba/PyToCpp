
#include <string>
#include <iostream>

using namespace std;

struct Pizza
{
    string company;
    float diameter;
    float weight;
};

int main()
{
    Pizza p;
    cout << "Enter company: " << endl;
    getline(cin, p.company);

    cout << "Enter diameter: " << endl;
    cin >> p.diameter;

    cout << "Enter weight: " << endl;
    cin >> p.weight;
    
    return 0;
}