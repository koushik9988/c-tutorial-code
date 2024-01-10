#include<iostream>

using namespace std;

template <typename T > T mymax(T x , T y)
{
    return (x > y)? x : y;
}

int main()
{
    cout<<mymax<int>(10,11)<<endl;
    cout<<mymax<float>(10.5,10)<<endl;
    cout<<mymax<double>(10.000005,10.000004)<<endl;
    

}
