
#include <iostream>

using namespace std;

double refcube(const double &ra)
{
    cout << "ra = " << ra << " &ra = " << &ra << endl;
    return ra * ra * ra;
}


int main()
{
    double side = 3.0;
    double * pd = &side;
    double & rd = side;
    long edge = 5L;
    double lens[4] = { 2.0, 5.0, 10.0, 12.0 };

    cout << "\nside = " << side << " &side = " << &side << endl;
    double c1 = refcube(side);    // ra is side
    cout << "c1 = " << c1 << " &c1 = " << &c1 << endl;

    cout << "\nlens[2] = " << lens[2] << " &lens[2] = " << &lens[2] << endl;
    double c2 = refcube(lens[2]);    // ra is rd is side
    cout << "c2 = " << c2 << " &c2 = " << &c2 << endl;

    cout << "\nrd = " << rd << " &rd = " << &rd << endl;
    double c3 = refcube(rd);    // ra is rd is side
    cout << "c3 = " << c3 << " &c3 = " << &c3 << endl;

    cout << "\n*pd = " << *pd << " pd = " << pd << endl;
    double c4 = refcube(*pd);    // ra is *pd is side
    cout << "c4 = " << c4 << " &c4 = " << &c4 << endl;

    // Without const, error will be:
    // a reference of type "double &" (not const-qualified) cannot be initialized with a value of type "long"
    cout << "\nedge = " << edge << " &edge = " << &edge << endl;
    double c5 = refcube(edge);    // ra is temporary variable
    cout << "c5 = " << c5 << " &c5 = " << &c5 << endl << endl;

    // Without const, error will be:
    // initial value of reference to non-const must be an lvalue
    double c6 = refcube(7.0);    // ra is temporary variable
    cout << "c6 = " << c6 << " &c6 = " << &c6 << endl << endl;

    // Without const, error will be:
    // initial value of reference to non-const must be an lvalue
    double c7 = refcube(side + 10.0);    // ra is temporary side
    cout << "c7 = " << c7 << " &c7 = " << &c7 << endl << endl;
}


// OUTPUT:
// side = 3 &side = 0x7fffffffd9b0
// ra = 3 &ra = 0x7fffffffd9b0
// c1 = 27 &c1 = 0x7fffffffd9c0

// lens[2] = 10 &lens[2] = 0x7fffffffda20
// ra = 10 &ra = 0x7fffffffda20
// c2 = 1000 &c2 = 0x7fffffffd9c8

// rd = 3 &rd = 0x7fffffffd9b0
// ra = 3 &ra = 0x7fffffffd9b0
// c3 = 27 &c3 = 0x7fffffffd9d0

// *pd = 3 pd = 0x7fffffffd9b0
// ra = 3 &ra = 0x7fffffffd9b0
// c4 = 27 &c4 = 0x7fffffffd9d8

// edge = 5 &edge = 0x7fffffffd9b8
// ra = 5 &ra = 0x7fffffffd9f8
// c5 = 125 &c5 = 0x7fffffffd9e0

// ra = 7 &ra = 0x7fffffffd9f8
// c6 = 343 &c6 = 0x7fffffffd9e8

// ra = 13 &ra = 0x7fffffffd9f8
// c7 = 2197 &c7 = 0x7fffffffd9f0