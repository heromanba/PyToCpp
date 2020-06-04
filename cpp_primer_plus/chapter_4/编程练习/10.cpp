
#include <array>
#include <iostream>


int main()
{
    using namespace std;

    array<double, 3> scores;

    cin >> scores[0];
    cin >> scores[1];
    cin >> scores[2];

    float mean = (scores[0] + scores[1] + scores[2]) / 3;
    cout << mean << endl;
    return 0;
}