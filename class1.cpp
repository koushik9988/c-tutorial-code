#include<iostream>
using namespace std;

class complex 
{
  public:
  int a,b;
 //creating a constructor(it is a special memebr function with same name
 //name as name of class,it is automatically called whenever an instance
 //of class in created. )
   complex(void);//this is a default contsructor as it takes no value.

   void printnum()
   {
    cout<< "your number is "<<a<<"+"<<b<<"i"<<endl;
   }

};

complex::complex(void)
{
    a=10,
    b=5;
}

int main()
{
  complex c1;
  c1.printnum();
  return 0;

}