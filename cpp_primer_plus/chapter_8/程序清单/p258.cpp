
#include <iostream>

using namespace std;


int main()
{
    int rats = 101;
    int * pt = &rats;
    int & rodents = *pt;

    cout << "Before pt = &bunnies" << endl;
    cout << "rats = " << rats << " &rats = " << &rats << endl;
    cout << "*pt = " << *pt << " pt = " << pt << endl;
    cout << "rodents = " << rodents << " &rodents = " << &rodents << endl;

    int bunnies = 50;
    pt = &bunnies;

    cout << "\nAfter pt = &bunnies" << endl;
    cout << "rats = " << rats << " &rats = " << &rats << endl;
    cout << "*pt = " << *pt << " pt = " << pt << endl;
    cout << "rodents = " << rodents << " &rodents = " << &rodents << endl;
    cout << "bunnies = " << bunnies << " &bunnies = " << &bunnies << endl;
    return 0;
}