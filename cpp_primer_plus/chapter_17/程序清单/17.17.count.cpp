
// count.cpp -- counting characters in a list of files
#include <iostream>
#include <fstream>
#include <cstdlib>    // for exit()

int main(int argc, char * argv[])
{
    using namespace std;
    if (argc == 1)    // quit if no arguments
    {
        cerr << "Usage: " << argv[0] << " filenames[s]\n";


        // /* We define these the same for all machines.
        //    Changes from this to the outside world should be done in `_exit'.  */
        // #define	EXIT_FAILURE	1	/* Failing exit status.  */
        // #define	EXIT_SUCCESS	0	/* Successful exit status.  */
        exit(EXIT_FAILURE);
    }

    ifstream fin;    // open stream
    long count;
    long total = 0;
    char ch;

    for (int file = 1; file < argc; file++)
    {
        fin.open(argv[file]);    // connect stream to argv[file]
        if (!fin.is_open())
        {
            cerr << "Could not open " << argv[file] << endl;
            fin.clear();
            continue;
        }
        count = 0;
        while (fin.get(ch))
            count++;
        cout << count << " characters in " << argv[file] << endl;
        total += count;
        fin.clear();    // neede for some implementations
        fin.close();    // disconnect file
    }
    cout << total << " characters in all files\n";

    return 0;
}
