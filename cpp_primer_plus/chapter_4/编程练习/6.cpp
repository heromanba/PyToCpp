
#include <string>
#include <iostream>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int calories;
};


int main()
{
    CandyBar snacks[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch", 2.3, 350}
    };
    cout << "snack.brand is: " << snacks[0].brand << endl;
    cout << "snack.weight is: " << snacks[0].weight << endl;
    cout << "snack.calories is: " << snacks[0].calories << endl;
    return 0;
}