#include<iostream>

using namespace std;

class human
{
    public:
    string name ;
    int age ;
    float height ;

    // Constructor declaration
    human(string n, int a, float h);

    // Member function declaration
    void display();

};

human::human(string name, int age, float height)
{
    this->name = name;
    this->age = age;
    this->height = height;
}

void human::display()
    {
        cout<<"name :"<<"\t"<<name<<endl;
        cout<<"age :"<<"\t"<<age<<endl;
        cout<<"height :"<<"\t"<<height<<endl;
    }


class researchscholar : public human
{
    public:

    string  studentID;

    researchscholar(string id, string name, int age , float height) : human (name, age, height), studentID(id) {}

    void display();
};

void researchscholar::display()
{
     // Call the base class (human) display function
    human::display();
    cout << "studentID :\t" << studentID << endl;
}

int main()
{
    human h1("kaushik", 25 ,154);
    researchscholar rs1("109443","pradipta",25, 158);

    rs1.display();

    //h1.display();

}