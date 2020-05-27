
// textin3.cpp -- reading chars to end of file
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);    // attempt to read a char;
    while (cin.fail() == false)    // test for EOF
    {
        cout << ch;    // echo character;
        ++count;
        cin.get(ch);    // attempt to read another char;
    }
    cout << endl << count << " characters read\n";
    return 0;
}


// OUTPUT:
// The green bird sings in the winter
// The green bird sings in the winter
// Yes, but the crow flies in the dawn
// Yes, but the crow flies in the dawn