
// mixtypes.cpp -- some type combinations
#include <iostream>

struct antarctica_years_end
{
    int year;
    /* some really interesting data, etc. */
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa -> year = 1999;
    antarctica_years_end trio[3];    // array of 3 structures;
    trio[0].year = 2003;
    std::cout << trio -> year << std::endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1] -> year << std::endl;

    // arp是一个数组的名称，因此它是第一个元素的地址。但其第一个元素为指针，
    // 因此ppa是一个指针，指向一个指向const antarctica_years_end的指针。
    const antarctica_years_end ** ppa = arp;
    
    auto ppb = arp;    // C++11 automatic type deduction. 

    // or else use const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa) -> year << std::endl;
    std::cout << (*(ppb + 1)) -> year << std::endl;
    return 0;
}
