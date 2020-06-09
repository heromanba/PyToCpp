
#include <iostream>

using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

const free_throws & clone(free_throws & ft)
{
    free_throws * pt;
    
    // *pt = ft;    // Will throw error.

    pt = &ft;    // copy info
    return *pt;
}

const free_throws & clone2(free_throws & ft)
{
    free_throws newguy;    // first step to big error
    newguy = ft;
    return newguy;
}


int main()
{
    free_throws three = {"Minnie Max", 7, 9, 0.8};

    // // qualifiers dropped in binding reference of type "free_throws &" to initializer of type "const free_throws"
    // free_throws & jolly = clone(three);

    const free_throws & jolly = clone(three);

    const free_throws & jolly2 = clone2(three);
    
    //  &jolly2 = 0
    //  &jolly2 == NULL is: 1
    cout << " &jolly2 = " << &jolly2 << endl;
    cout << " &jolly2 == NULL is: " << (&jolly2 == NULL) << endl;

    // Will throw `segmentation fault`
    cout << "jolly2 = " << jolly2.name << endl;
    return 0;
}