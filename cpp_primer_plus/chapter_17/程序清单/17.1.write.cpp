
// write.cpp -- using cout.write()
#include <iostream>
#include <cstring>    // or else string.h

int main()
{
    using std::cout;
    using std::endl;

    const char * state1 = "Florida";
    const char * state2 = "Kansas";
    const char * state3 = "Euphoria";

    int len = std::strlen(state2);

    cout << "Increasing loop index:\n";

    int i;
    for (i = 1; i <= len; i++)
    {
        /* 
        cout.write doc:

        std::ostream &std::ostream::write(const char *__s, std::streamsize __n)
        @param __s The array to insert.
        @param __n Maximum number of characters to insert.
        */
        cout.write(state2, i);
        cout << endl;
    }

    // concatenate output
    cout << "Decreasing loop index:\n";
    for (i = len; i > 0; i--)
        cout.write(state2, i) << endl;

    // exceed string length
    cout << "Exceeding string length:\n";
    cout.write(state2, len + 5) << endl;
    return 0;
}


// OUTPUT:
// Increasing loop index:
// K
// Ka
// Kan
// Kans
// Kansa
// Kansas
// Decreasing loop index:
// Kansas
// Kansa
// Kans
// Kan
// Ka
// K
// Exceeding string length:
// KansasEuph