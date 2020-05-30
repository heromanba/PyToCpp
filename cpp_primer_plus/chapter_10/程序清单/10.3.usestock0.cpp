
// usestock0.cpp -- the client program
// compile with stock 00.cpp
#include <iostream>
#include "10.1.stock00.h"

int main()
{
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("Nanosmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show();
    return 0;
}


// OUTPUT:
// Company: Nanosmart  Shares: 20
//   Share Price: $12.5  Total Worth: $250
// Company: Nanosmart  Shares: 35
//   Share Price: $18.125  Total Worth: $634.375
// You can't sell more than you have! Transaction is aborted.
// Company: Nanosmart  Shares: 35
//   Share Price: $18.125  Total Worth: $634.375
// Company: Nanosmart  Shares: 300035
//   Share Price: $40.125  Total Worth: $1.20389e+07
// Company: Nanosmart  Shares: 35
//   Share Price: $0.125  Total Worth: $4.375