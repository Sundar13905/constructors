#include <iostream>
#include <string>
// sundaravadivelan karthikeyan 
// 23070123136
// Experiment 12 Constructors 

class Person {
    std::string name;
    int age;

public:
    // Default constructor 
    Person() : name("Unknown"), age(0) {
        std::cout << "Default constructor called.\n";
    }

    // Parameterized constructor 
    Person(std::string n, int a) : name(n), age(a) {
        std::cout << "Parameterized constructor called.\n";
    }

    // Constructor defined outside the class
    Person(std::string n);

    // Copy constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        std::cout << "Copy constructor called.\n";
    }

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Constructor defined outside the class
Person::Person(std::string n) : name(n), age(0) {
    std::cout << "Constructor defined outside the class called.\n";
}

int main() {
    // Using the default constructor
    Person p1;
    p1.display();

    // Using the parameterized constructor
    Person p2("Alice", 25);
    p2.display();

    // Using the constructor defined outside the class
    Person p3("Bob");
    p3.display();

    // Using the copy constructor
    Person p4 = p2;
    p4.display();

    return 0;
}
