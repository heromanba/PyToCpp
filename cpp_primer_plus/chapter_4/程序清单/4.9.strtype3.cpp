
// strtype3.cpp -- more string classes features
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // assignment for string objects and character arrays;
    str1 = str2;    // copy str2 to str1;
    strcpy(charr1, charr2);    // copy charr2 to charr1;

    // appending for string objects and character arrays;
    str1 += " paste";    // add paste to end of str1;
    strcat(charr1, " juice");    // add juice to end of charr1;

    // finding the length of a string object and a C-style string;
    int len1 = str1.size();    // obtain length of str1;
    int len2 = strlen(charr1);    // obtain length of charr1;

    cout << "The string str1 " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string charr1 " << charr1 << " contains "
         << len2 << " characters.\n";
    return 0;
}


// OUTPUT:
// The string str1 panther paste contains 13 characters.
// The string charr1 jaguar juice contains 12 characters.