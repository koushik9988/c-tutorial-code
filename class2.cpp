#include<iostream>
using namespace std;

class complex 
{
  public:
  int a,b;
 //creating a constructor(it is a special memeber function with same name
 //name as name of class,it is automatically called whenever an instance
 //of class in created. )
   complex(int x, int y);//this is a default contsructor as it takes no value.

   void printnum()
   {
    cout<< "your number is "<<a<<"+"<<b<<"i"<<endl;
   }

};

complex::complex(int x , int y) //parameterized constructor
{
    a=x,
    b=y;
}

int main()
{
  complex c1(66,7);
  c1.printnum();
  return 0;
}