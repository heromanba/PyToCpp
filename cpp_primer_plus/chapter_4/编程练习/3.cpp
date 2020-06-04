
#include <iostream>
#include <cstring>


int main()
{
    using namespace std;

    int size = 20;
    char first_name[size];
    char last_name[size];

    cout << "Enter your first name: " << endl;
    cin.getline(first_name, size);

    cout << "Enger you last name: " << endl;
    cin.getline(last_name, size);

    cout << "Here's the information in a single string:" << endl;
    char whole_name[2 * size + 1];

    // char *strcpy(char * dest, const char * src);
    // copy char array src into dest;
    strcpy(whole_name, last_name);

    // char *strcat(char * dest, const char * src);
    // concatenate char array src to dest;
    strcat(strcat(whole_name, ","), first_name);
    cout << whole_name << endl;

    return 0;
}