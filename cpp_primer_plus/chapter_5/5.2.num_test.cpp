
// num_test.cpp -- use numeric test in for loop
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)    // quits when i is 0
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";
    return 0;
}


// OUTPUT:
// Enter the starting countdown value: 10
// i = 10
// i = 9
// i = 8
// i = 7
// i = 6
// i = 5
// i = 4
// i = 3
// i = 2
// i = 1
// Done now that i = 0