// usenmsp.cpp -- using namespaces
#include <iostream>
#include "9.11.namesp.h"

void other(void);
void another(void);


int main(void)
{
    using debts::Debt;

    using debts::showDebt;

    // for golf.name, fname: Benny, lname: Goatsniff;
    Debt golf = { {"Benny", "Goatsniff"}, 120.0 };

    showDebt(golf);

    return 0;
}


void other(void)
{
    using std::cout;
    using std::endl;

    using namespace debts;

    Person dg = {"Doodle", "Glister"};

    showPerson(dg);

    cout << endl;

    Debt zippy[3];
    
    int i;

    for (i = 0; i < 3; i++)
        getDebt(zippy[i]);
    
    for (i = 0; i < 3; i++)
        showDebt(zippy[i]);

}