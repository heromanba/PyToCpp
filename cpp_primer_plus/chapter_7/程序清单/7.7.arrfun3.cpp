
// arrfun3.cpp -- array functions and const
#include <iostream>

const int Max = 5;

// function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int limit);    // don't change data
void revalue(double r, double ar[], int n);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input;
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;

    char temp;

    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)    // signal to terminate
            break;
        ar[i] = temp;
    }
    return i;
}


// The following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}


// multiplies each element of ar[] by r;
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}


// OUTPUT:
// Enter value #1: 10000
// Enter value #2: 8000
// Enter value #3: 222000
// Enter value #4: 118000
// Enter value #5: 24000
// Property #1: $10000
// Property #2: $8000
// Property #3: $222000
// Property #4: $118000
// Property #5: $24000
// Enter revaluation factor: 0.8
// Property #1: $8000
// Property #2: $6400
// Property #3: $177600
// Property #4: $94400
// Property #5: $19200
// Done.