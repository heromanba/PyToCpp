
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
    CandyBar * snacks;
    snacks = new CandyBar[3];

    snacks[0] = {"Mocha Munch", 2.3, 350};
    snacks[1] = {"Mocha Munch", 2.3, 350};
    snacks[2] = {"Mocha Munch", 2.3, 350};
    
    cout << "snack.brand is: " << snacks[0].brand << endl;
    cout << "snack.weight is: " << snacks[0].weight << endl;
    cout << "snack.calories is: " << snacks[0].calories << endl;

    delete [] snacks;
    return 0;
}