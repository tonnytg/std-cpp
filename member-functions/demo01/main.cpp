#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    void greet() {
        std::cout << "Hello, my name is " << name << "!" << std::endl;
    }
};

int main() {

    Person p1("Alice", 25);
    Person p2("Bob", 30);

    p1.displayInfo();
    p1.greet();

    p2.displayInfo();
    p2.greet();

    return 0;
}
