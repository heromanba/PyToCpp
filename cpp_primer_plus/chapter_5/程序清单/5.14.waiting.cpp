
// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>    // describes clock() function, clock_t type

int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;

    // CLOCKS_PER_SEC: 每秒包含的系统时间单位数.
    clock_t delay = secs * CLOCKS_PER_SEC;    // convert to clock ticks;
    
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)    // wait until time elapses
        ;    // note the semicolon;
    cout << "done \a\n";
    return 0;
}