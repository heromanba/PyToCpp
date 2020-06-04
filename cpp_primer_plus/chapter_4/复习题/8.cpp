
#include <string>

using namespace std;

struct Fish {    // structure declaration;
    string species;
    int weight;
    float length;
};


int main()
{
    Fish peter = {
        "golden_fish",
        10,
        20
    };
}