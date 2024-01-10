#include <iostream>

using namespace std;

int main()
{
    int x = 2;   // interger named  x is set to 2
    int *p = &x; // integer pointer nmaed p is set to the
                 // adress of x
    int **ptr  = &p;
    int ***pt = &ptr;
    int ****ptt = &pt;
    cout<<****ptt<<endl;// dereferenced 3 times
    return 0;
}