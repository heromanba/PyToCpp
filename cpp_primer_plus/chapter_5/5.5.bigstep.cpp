
// bigstep.cpp -- count as directed
#include <iostream>

int main()
{
    using std::cout;    // using declaration;
    using std::cin;
    using std::endl;

    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0;
}


// OUTPUT:
// Enter an integer: 10
// Counting by 10s:
// 0
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80
// 90