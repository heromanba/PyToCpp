
// block.cpp -- use a block statement;
#include <iostream>

int main()
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values;\n";
    double number;
    double sum = 0.0;
    for (int i = 0; i<= 5; i++)
    {    // block starts here;
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }    // block ends here, no colon;
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";
    return 0;
}


// OUTPUT:
// The Amazing Accounto will sum and average five numbers for you.
// Please enter five values;
// Value 0: 2
// Value 1: 4
// Value 2: 5
// Value 3: 7
// Value 4: 8 
// Value 5: 0
// Five exquisite choices indeed! They sum to 26
// and average to 5.2.
// The Amazing Accounto bids you adieu!