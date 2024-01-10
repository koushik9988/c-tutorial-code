#include <iostream>

using namespace std;

class A
{
    public:
    int a;
    
    void setdata( int a)
    {
        this-> a = a; 
    }

    void getdata()
    {
        cout<<"value is :"<<a<<endl;
    }

};

using namespace std;

int main()
{ 
    A a1;
    A *ptr = &a1;
    //(*ptr).setdata(2);
    //(*ptr).getdata();
    //instead of above commeneted out code we can use alternatively
    ptr->setdata(2);
    ptr->getdata();

return 0;

}