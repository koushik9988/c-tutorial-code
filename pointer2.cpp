#include <iostream>

using namespace std;

int main()
{
    int x = 2;   
    int y = 4;
    int *p = &x; 
    int *q = &y;
                 
    int z = *p + * q ;
      
    cout << x << endl;
    cout << y << endl;
    cout << z << endl; 
    return 0;
}
