//template array class
#include<iostream>

using namespace std;

template <typename T > class Array
{
    private:
    T *ptr ;
    int  size ; // size of array 

    //member function declaration 
    public:
    //constructor array
    Array (T arr[], int s);
    //print function to display array
    void print();
};

//memeber function declaration outside the class code
template <typename T> Array<T> :: Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;

    for(int i =0 ; i < size ; i++)
    {
        ptr[i] = arr[i];
    }
}

template <typename T> void Array<T>:: print()
{
    for (int i =0 ;i< size; i++)
    {
        cout<<""<<*(ptr + i)<<"\t"; //pointer arithmatic
    }
    cout<<endl;
}

int main()
{
    float arr[5] = {1.3, 2.6, 3.1, 4.1, 5.9};
    Array<float> a(arr,5);
    a.print();
    return 0;

}