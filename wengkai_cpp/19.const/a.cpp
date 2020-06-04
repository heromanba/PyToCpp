
#include <iostream>
using namespace std;

int main()
{
    char * s = "hello, world";
    
    cout << s << endl;

    s[0] = 'B';

    cout << s << endl;
}