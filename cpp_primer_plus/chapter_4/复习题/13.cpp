
#include <iostream>
#include <vector>    // STL C++98


int main()
{
    using namespace std;

    int size;
    cin >> size;
    int* a = new int[size];
    
    cout << sizeof(a) << endl;
    cout << sizeof(*a) << endl;
    cout << size << endl;

    delete [] a;

    vector<int>* b = new vector<int> (size);
    cout << sizeof(b) << endl;

    return 0;
}