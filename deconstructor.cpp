#include <iostream>

class Person {
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {
        std::cout << "Constructor called for " << name << ".\n";
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name << ".\n";
    }

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person p1("Alice", 30);
    p1.display();
    Person p2("Bob", 25);
    p2.display();

    // Scope block to demonstrate destructor call at the end of the block
    {
        Person p3("Charlie", 40);
        p3.display();
    } 

    std::cout << "End of main function.\n";

    return 0; // p1 and p2 destructors will be called here
}
