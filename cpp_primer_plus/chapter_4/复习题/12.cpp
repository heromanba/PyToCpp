
#include <iostream>


int main()
{
    using namespace std;

    float treacle[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    float* a = treacle;

    cout << *a << endl;
    cout << *(a + 9) << endl;
    cout << sizeof(treacle) / sizeof(float) << endl;
    return 0;
}