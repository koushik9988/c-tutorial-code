#include<iostream>
using namespace std;

class complex 
{  
public:
    int a, b;

    // Parameterized Constructor (declaration)
    complex(int x, int y);

    void printnum()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};


// Parameterized Constructor (definition)
complex::complex(int x, int y) : a(x), b(y)
{
}

int main()
{
    complex c1(3, 7);
    c1.printnum();
    return 0;
}
