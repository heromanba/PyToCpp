
#include <iostream>


class Bakery{
public:
    enum { Months = 12 };
    static const int Date = 30;
};


int main()
{
    using namespace std;
    cout << "Bakery::Months is: " << Bakery::Months << endl;
    cout << "Bakery::Date is: " << Bakery::Date << endl;
    return 0;
}