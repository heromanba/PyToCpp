
#include <iostream>

int sum(int (*ar2)[4], int size);


int main()
{
    using namespace std;

    int data[3][4] = {
        {1, 2, 3, 4}, 
        {9, 8, 7, 6}, 
        {2, 4, 6, 8}
    };
    cout << "data is: " << data << endl << endl;

    // pointer to the first row of an array of 4 int;
    cout << "data[0] = " << data[0] << endl;
    cout << "*(data) = " << *data << endl << endl;

    // pointer to the second row of an array of 4 int;
    cout << "data[0] + 1 = " << data[0] + 1 << endl;
    cout << "&data[0][1] = " << &data[0][1] << endl << endl;

    cout << "data[1] = " << data[1] << endl;
    cout << "*(data + 1) = " << *(data + 1) << endl << endl;

    cout << "data[1][1] = " << data[1][1] << endl;
    cout << "*(*(data + 1) + 1) = " << *(*(data + 1) + 1) << endl << endl;

    int total = sum(data, 3);

    return 0;
}

int sum(int (*ar2)[4], int size)
{
    using namespace std;
    cout << "ar2 is: " << ar2 << endl;

    int total = 0;
    for (int r = 0; r < size; r++)
        for (int c = 0; c < 4; c++)
            total += ar2[r][c];
    return total;
}