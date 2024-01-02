
#include <iostream>

class Person {

    public:

        std::string name;
        int age;

        Person(std::string name, int age) {
            this->name = name;
            this->age = age;
        };
};

int main() {

    std::cout << "Example with all public" << std::endl;
    Person *p = new Person("John", 42);
    std::cout << "Person: " << p->name << ", " << p->age << std::endl;

    return 0;
}