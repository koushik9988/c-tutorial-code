#include <iostream>
#include <string>

// Base class (parent class)
class Person {
protected:
    std::string name;
    int age;

public:
    // constructor for the class
    Person(const std::string& n, int a) : name(n), age(a) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age;
    }
};

// Derived class (child class) - Student
class Student : public Person {
private:
    int studentID;

public:
    Student(const std::string& n, int a, int id) : Person(n, a), studentID(id) {}

    void study() const {
        std::cout << "Student with ID " << studentID << " is studying." << std::endl;
    }

    void displayInfo() const {
        Person::displayInfo();
        std::cout << ", Student ID: " << studentID << std::endl;
    }
};

// Derived class (child class) - Teacher
class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher(const std::string& n, int a, const std::string& subj) : Person(n, a), subject(subj) {}

    void teach() const {
        std::cout << "Teacher is teaching " << subject << "." << std::endl;
    }

    void displayInfo() const {
        Person::displayInfo();
        std::cout << ", Subject: " << subject << std::endl;
    }
};

int main() {
    // Creating instances of derived classes
    Student student("Alice", 20, 12345);
    Teacher teacher("Mr. Smith", 35, "Mathematics");

    // Using common base class interface
    std::cout << "Student Info: ";
    student.displayInfo();
    student.study();

    std::cout << "----------------------" << std::endl;

    std::cout << "Teacher Info: ";
    teacher.displayInfo();
    teacher.teach();

    return 0;
}
