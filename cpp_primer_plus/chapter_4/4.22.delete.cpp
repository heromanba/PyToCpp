
// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>    // or string.h

using namespace std;

char * getname(void);    // function prototype;

int main() 
{
    char * name;    // create pointer but no storage;

    name = getname();    // assign pointer but no storage;
    cout << name << " at " << (int *) name << "\n";
    delete [] name;    // memory freed;

    name = getname();    // reuse freed memory;
    cout << name << " at " << (int *) name << "\n";
    delete [] name;    // memory freed again;

    return 0;
}

char * getname()    // return pointer to new string;
{
    char temp[80];    // temporary storage;

    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);    // copy string into smaller space;

    return pn;
}


// OUTPUT:
// Enter last name: Fredeldumpkin
// Fredeldumpkin at 0x555555769690
// Enter last name: pool
// pool at 0x555555769690