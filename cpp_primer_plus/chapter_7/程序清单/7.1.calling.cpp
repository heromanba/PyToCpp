
// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>

void simple();    // function prototype;

int main()
{
    using namespace std;

    cout << "main() will call the simple() function:\n";
    simple();    // function call
    cout << "main() is fninshed with the simple() function.\n";
    // cin.get();
    return 0;
}


// function definition
void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}


// OUTPUT:
// main() will call the simple() function:
// I'm but a simple function.
// main() is fninshed with the simple() function