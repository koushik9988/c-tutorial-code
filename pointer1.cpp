#include <iostream>

using namespace std;

int main()
{
    int x = 2;   // interger named  x is set to 2
    int *p = &x; // integer pointer nmaed p is set to the
                 // adress of x
    int y = *p;  // integer named y is set to the thing ponited by
                 // pointer p

    cout << x << endl;
    cout << y << endl;
    cout << p << endl; // this will print the address
    return 0;
}
