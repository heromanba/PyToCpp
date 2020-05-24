
// ourfunc.cpp -- defining your own funciton

#include <iostream>
void simon(int);    // function prototype for simon();

using namespace std;    // affects all function definitions in this file.

int main() {
    // using namespace std;

    simon(3);    // call the simon funciton;
    cout << "Pick an integer: ";
    int count; 
    cin >> count;
    simon(count);    // call it again;
    cout << "Done!" << endl;
    return 0;
}

void simon(int n) {
    // using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl;
    // void functions don't need return statements.
}