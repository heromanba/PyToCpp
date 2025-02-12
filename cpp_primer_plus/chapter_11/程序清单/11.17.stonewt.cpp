
// stonewt.cpp -- Stonewt methods
#include <iostream>

using std::cout;

#include "11.16.stonewt.h"


// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer conversion
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}


// Constructor Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}


Stonewt::Stonewt()    // destructor
{
    stone = pounds = pds_left = 0;
}


// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}


// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}