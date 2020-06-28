
// fill.cpp -- changing fill character for fields
#include <iostream>

int main()
{
    using std::cout;
    cout.fill('*');

    const char * staff[2] = { "Waldo Whipsnade", "Wilmaire Wooper" };
    long bonus[2] = {900, 1350};

    for (int i = 0; i < 2; i++)
    {
        cout << staff[i] << ": $";
        cout.width(7);
        cout << bonus[i] << "\n";
    }

    return 0;
}


// OUTPUT:
// Waldo Whipsnade: $****900
// Wilmaire Wooper: $***1350