
// textin2.cpp -- using cin.get(char)
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";

    cin.get(ch);    // use the cin.get(ch) function;

    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // use it again;
    }
    cout << endl << count << " characters read\n";
    return 0;
}


// OUTPUT:
// Enter characters; enter # to quit:
// Did you use a #2 pencil?
// Did you use a 
// 14 characters read