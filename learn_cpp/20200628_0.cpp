
// Calculate execution time of a function

#include <iostream>
#include<cstring>

using namespace std;

class Integer
{
private:
    int data;
public:
    // Constructors.
    Integer() {};
    Integer(float n) { data = n; cout << "Integer(float n)." << endl; }
    explicit Integer(double n) { data = n; cout << "Integer(double n)." << endl; }
    Integer(long n) { data = n; cout << "Integer(long n)." << endl; }
    Integer(Integer & i) { *this = i; cout << "Integer(Integer & i)." << endl; }

    // Overloaded operators.
    Integer & operator=(const long c) { 
        data = c; 
        cout << "Integer & operator=(const long n)." << endl; 
    }
    Integer & operator=(const char* c) { 
        data = stoi(c);
        cout << "Integer & operator=(const long n)." << endl; 
    }

    // Conversion functions.
    operator long() const { cout << "operator long() const" << endl; return (int)data; };
    operator char*() const { 
        const char* ret_str = to_string(data).c_str();
        char* ret = new char[strlen(ret_str) + 1];
        strcpy(ret, ret_str);        
        cout << "operator char*() const, ret: " << ret << endl; 
        return ret; 
    };
};


int main()
{
    Integer n;

    float a = 10.0;
    double b = 10.0;
    const char* c = "500";

    n = a;

    n = Integer(b);
    n = (Integer) b;

    n = c;

    c = n;
    return 0;
}


// OUTPUT:
// Integer & operator=(const long n).
// Integer(double n).
// Integer(double n).
// Integer & operator=(const long n).
// operator char*() const, ret: 500