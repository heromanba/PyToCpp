
// Calculate execution time of a function

#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

void loop_1_times(void);
void loop_5_times(void);

void get_exec_time(void (*pf)(void));


int main()
{
    using namespace std;
    cout << "loop_1_times: " << endl;
    get_exec_time(loop_1_times);

    cout << "\nloop_5_times: " << endl;
    get_exec_time(loop_5_times);

    return 0;
}


void loop_1_times(void)
{
    for (int i = 0; i < 1; i++)
    {
        // https://stackoverflow.com/a/10613664
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}


void loop_5_times(void)
{
    for (int i = 0; i < 5; i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}


void get_exec_time(void (*pf)(void))
{
    // https://stackoverflow.com/a/27856440
    auto start = std::chrono::system_clock::now();
    (*pf)();
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;

    std::cout << "elapsed time: " << (float)elapsed_seconds.count() << "s\n";
}


// OUTPUT:

// loop_1_times: 
// elapsed time: 1.00016s

// loop_5_times: 
// elapsed time: 5.00052s