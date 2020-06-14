
// sayings2.cpp -- using expanded String class
// compile with string1.cpp

#include <iostream>
#include <cstdlib>    // (or stdlib.h) for rand(), srand()
#include <ctime>    // (or time.h) for time()
#include "12.4.string1.h"

const int ArSize = 10;
const int MaxLen = 81;


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    String name;
    cout << "Hi, what's your name?\n>> ";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
         << " short sayings <empty line to quit>;\n";
    String sayings[ArSize];    // array of objects
    char temp[MaxLen];    // temporary string storage
    
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')    // empty line?
            break;    // i not incremented
        else
            sayings[i] = temp;    // overloaded assignment
    }
    int total = i;    // total # of lines read

    if (total > 0)
    {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        
        // use pointers to keep track of shortest, first strings
        String * shortest = &sayings[0];    // initialize to first object
        String * first = &sayings[0];

        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)
                first = &sayings[i];
        }
        cout << "Shortest saying:\n" << * shortest << endl;
        cout << "First alphabetically:\n" << * first << endl;
        cout << "This program used" << String::HowMany()
             << " String objects. Bye.\n";

        srand(time(0));
        int choice = rand() % total;    // pick index at random

        // use new to create, initialize new String object
        String * favorite = new String(sayings[choice]);
        cout << "My favorite saying:\n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "Not much to say, Bye.\n";
    cout << "Bye.\n";
    return 0;
}


// OUTPUT:
// Hi, what's your name?
// >> Kirt Rood
// Kirt Rood, please enter up to 10 short sayings <empty line to quit>;
// 1: a friend in need is a friend indeed
// 2: neither a borrower nor a lender be
// 3: a stitch in time saves nine
// 4: a niche in time saves stine
// 5: it takse a crook to catch a crook
// 6: cold hands, warm heart
// 7: 
// Here are your sayings:
// a: a friend in need is a friend indeed
// n: neither a borrower nor a lender be
// a: a stitch in time saves nine
// a: a niche in time saves stine
// i: it takse a crook to catch a crook
// c: cold hands, warm heart
// Shortest saying:
// cold hands, warm heart
// First alphabetically:
// a friend in need is a friend indeed
// This program used11 String objects. Bye.
// My favorite saying:
// a niche in time saves stine
// Bye.