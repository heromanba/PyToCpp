
#include <iostream>

namespace Jack {
    double pail;    // variable declaration
    void fetch();    // function prototype
    int pal;    // variable declaration
    struct Well {    // structure declaration

    };    
}

namespace Jill {
    double bucket(double n) { return n; }    // function definition
    double fetch;    // variable declaration
    int pal;    // variable declaration
    struct Hill{};    // structure declaration
}

namespace Jill {    // add name to existing namespace
    char * goose(const char *);
}

namespace Jack{    // add function definition
    void fetch(){ }    
}


namespace elements    // nested namespace
{
    namespace fire
    {
        int flame;
    }
    float water;
}

namespace myth    // use `using` in namespace
{
    using Jill::fetch;
    using namespace elements;
    using std::cout;
    using std::cin;
}

// create alias for namespace
namespace my_very_favorite_things {}
namespace mvft = my_very_favorite_things;


int main()
{
    return 0;
}