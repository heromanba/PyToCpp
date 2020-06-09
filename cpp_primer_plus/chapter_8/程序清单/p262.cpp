
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

    cout << "\nedge = " << edge << " &edge = " << &edge << endl;
    double c5 = refcube(edge);    // ra is temporary variable
    cout << "c5 = " << c5 << " &c5 = " << &c5 << endl << endl;

    double c6 = refcube(7.0);    // ra is temporary variable
    cout << "c6 = " << c6 << " &c6 = " << &c6 << endl << endl;

    double c7 = refcube(side + 10.0);    // ra is temporary side
    cout << "c7 = " << c7 << " &c7 = " << &c7 << endl << endl;
}