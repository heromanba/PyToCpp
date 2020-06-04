
#include <iostream>


int main()
{
    using namespace std;
    
    double ted = 10.0;
    double* ted_ptr = &ted;

    cout << *ted_ptr << endl;
    return 0;
}