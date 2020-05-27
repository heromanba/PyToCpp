
// structur.cpp -- a simple structure
#include <iostream>

struct inflatable    // structure declaration.
{
    char name[20];
    float volume;
    double price;
};


int main()
{
    using namespace std;
    inflatable guest = {
        "Glorious Gloria",    // name value
        1.88,    // volume value
        29.99    // price value
    };    // guest is a structure variable of type inflatable;

    // It's initialized to the indicated values
    inflatable pa1 =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };    // pa1 is a second variable of type inflatable;

    // NOTE: some implementations require using `static inflatable guest = `
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pa1.name << "!\n";
    // pa1.name is the name member of the pa1 variable
    cout << "You can have both for $";
    cout << guest.price + pa1.price << "!\n";
    return 0;
}