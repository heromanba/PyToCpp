
// usestock2.cpp -- using the Stock class
// compile with stock20.cpp
#include <iostream>
#include "10.7.stock20.h"

const int STKS = 4;

int main()
{
    // create an array of intialized objects
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };
    std::cout << "Stock holdings:\n";

    int st;
    for (st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }

    // set pointer to first element
    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top -> topval(stocks[st]);
    std::cout << "\nMost valuable holding:\n";
    top -> show();
    return 0;
}


// OUTPUT:
// Stock holdings:
// Company: NanoSmart  Shares: 12
//   Share Price: $20.000  Total Worth: $240.00
// Company: Boffo Objects  Shares: 200
//   Share Price: $2.000  Total Worth: $400.00
// Company: Monolithic Obelisks  Shares: 130
//   Share Price: $3.250  Total Worth: $422.50
// Company: Fleep Enterprises  Shares: 60
//   Share Price: $6.500  Total Worth: $390.00

// Most valuable holding:
// Company: Monolithic Obelisks  Shares: 130
//   Share Price: $3.250  Total Worth: $422.50