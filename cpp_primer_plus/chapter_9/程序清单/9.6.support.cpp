
// support.cpp -- use external variable
// compile with external.cpp
#include <iostream>
#include <vector>

extern double warming;    // use warming from another file

// function prototype.
void update(double dt);
void local();

using std::cout;
void update(double dt)    // modifies global variable
{
    extern double warming;    // optional redeclaration
    warming += dt;    // uses global warming.
    cout << "Updating global warming to " << warming;
    cout << " degree.\n";
}

void local()    // uses local variables
{
    double warming = 0.8;    // new variable hides external one

    cout << "Local warming = " << warming << " degrees.\n";

    // Access global with the scope resolution operator
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}


// OUTPUT:
// Global warming is 0.3 degrees.
// Updating global warming to 0.4 degree.
// Global warming is 0.4 degrees.
// Local warming = 0.8 degrees.
// But global warming = 0.4 degrees.
// Global warming is 0.4 degrees.