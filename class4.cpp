#include<iostream>
using namespace std;

class complex 
{  
public:
    int a, b;

    // Parameterized Constructor (declaration)
    complex::complex(int x, int y) : a(x), b(y){}

    void printnum()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};


int main()
{
    complex c1(69, 69);
    c1.printnum();
    return 0;
}
