
// stacktem.cpp -- testing the template stack class
#include <iostream>
#include <string>
#include <cctype>
#include "14.13.stacktp.h"

using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st;    // create an empty stack
    char ch;
    std::string po;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && std::toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;

        if (!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                      cin >> po;
                      if (st.isfull())
                          cout << "stack already full\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "stack already empty\n";
                      else {
                          st.pop(po);
                          cout << "PO #" << po << " popped\n";
                          break;
                      }
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}


// OUTPUT:
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// A
// Enter a PO number to add: red911porsche
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// A
// Enter a PO number to add: blueR9audi
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// A
// Enter a PO number to add: silver747boeing
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// P
// PO #silver747boeing popped
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// P
// PO #blueR9audi popped
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// P
// PO #red911porsche popped
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// P
// stack already empty
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// P
// stack already empty
// Please enter A to add a purchase order,
// P to process a PO, or Q to quit.
// Q
// Bye