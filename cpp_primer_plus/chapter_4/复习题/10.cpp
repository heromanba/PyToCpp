
#include <iostream>

enum Response {
    Yes = 1, 
    No = 0,
    Maybe = 2
};


int main()
{
    using namespace std;

    Response response;
    
    Response r = Response::Yes;

    r = Response(2);

    r = Yes;
    
    cout << r << endl;
    return 0;
}