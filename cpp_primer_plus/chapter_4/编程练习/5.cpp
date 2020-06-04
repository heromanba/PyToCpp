
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
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };
    cout << "snack.brand is: " << snack.brand << endl;
    cout << "snack.weight is: " << snack.weight << endl;
    cout << "snack.calories is: " << snack.calories << endl;
    return 0;
}