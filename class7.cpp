#include<iostream>
#include<vector>

using namespace std;

class human
{
public:
    string name;
    int age;
    float height;

    // Constructor declaration
    human(string n, int a, float h);

    // Member function declaration
    void display() const;  // Mark display as const

};

human::human(string name, int age, float height)
{
    this->name = name;
    this->age = age;
    this->height = height;
}

void human::display() const  // Mark display as const
{
    cout << "name :\t" << name << endl;
    cout << "age :\t" << age << endl;
    cout << "height :\t" << height << endl;
}

class researchscholar : public human
{
public:
    string studentID;

    researchscholar(string id, string name, int age, float height) : human(name, age, height), studentID(id) {}

    // Overriding display function to include studentID
    void display() const;  // Mark display as const
};

void researchscholar::display() const  // Mark display as const
{
    // Call the base class (human) display function
    human::display();

    cout << "studentID :\t" << studentID << endl;
}

int main()
{
    vector<human> humans;
    vector<researchscholar> researchscholars;

    char choice;

    do 
    {
        cout << "Enter data for a human:\n";
        string h_name;
        int h_age;
        float h_height;

        cout << "Enter human's name: ";
        cin >> h_name;
        cout << "Enter human's age: ";
        cin >> h_age;
        cout << "Enter human's height: ";
        cin >> h_height;

        humans.emplace_back(h_name, h_age, h_height);

        cout << "Do you want to enter data for another human? (y/n): ";
        cin >> choice;
    } 
    while (choice == 'y' || choice == 'Y');

    do 
    {
        cout << "Enter data for a research scholar:\n";
        string rs_name;
        int rs_age;
        float rs_height;
        string rs_id;

        cout << "Enter research scholar's name: ";
        cin >> rs_name;
        cout << "Enter research scholar's age: ";
        cin >> rs_age;
        cout << "Enter research scholar's height: ";
        cin >> rs_height;
        cout << "Enter research scholar's student ID: ";
        cin >> rs_id;

        researchscholars.emplace_back(rs_id, rs_name, rs_age, rs_height);

        cout << "Do you want to enter data for another research scholar? (y/n): ";
        cin >> choice;
    } 
    while (choice == 'y' || choice == 'Y');

    // Displaying information( auto create a copy of variable not actual variable 
    //so we have to use adress of that variable to manipulate)
    cout << "\nDisplaying human information:\n";
    for (const auto &h : humans)  // range absed for loop ( instead of (i = 0; i<= ; i++))
    {
        h.display();
        cout << "--------------------\n";
    }

    cout << "\nDisplaying research scholar information:\n";
    for (const auto &rs : researchscholars) 
    {
        rs.display();
        cout << "--------------------\n";
    }

    return 0;
}
