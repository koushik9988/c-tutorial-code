#include<iostream>

using namespace std;

template <typename T>
class Array
{
private:
    T *ptr;
    int size; // size of array

public:
    Array(int s);
    void input();
    void print();
    ~Array(); // Destructor to release allocated memory
};

template <typename T> Array<T>::Array(int s)
{
    ptr = new T[s];
    size = s;
}

template <typename T> void Array<T>::input()
{
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> ptr[i];
    }
}

template <typename T> void Array<T>::print()
{
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

template <typename T>Array<T>::~Array()
{
    delete[] ptr; // Release the allocated memory in the destructor
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    char type;
    cout << "Enter the type of the array (i for int, d for double, c for char, etc.): ";
    cin >> type;

    if (type == 'i')
    {
        Array<int> intArray(size);
        intArray.input();
        intArray.print();
    }
    else if (type == 'd')
    {
        Array<double> doubleArray(size);
        doubleArray.input();
        doubleArray.print();
    }
    else if (type == 'c')
    {
        Array<char> charArray(size);
        charArray.input();
        charArray.print();
    }
    return 0;
}
