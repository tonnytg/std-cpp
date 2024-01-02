#include <iostream>

class Person {
    private:
        std::string name;
        int age;

    public:
        Person(std::string name, int age) {
            this->name = name;
            this->age = age;
        };

        ~Person() {
            std::cout << "Person " << this->name << " destroyed" << std::endl;
        }

        std::string getName() {
            return this->name;
        }

        int getAge() {
            return this->age;
        }
};

int main(int argc, char **argv) {

    Person *p = new Person("John", 42);
    std::cout << "Person: " << p->getName() << ", " << p->getAge() << std::endl;
    delete p;

    return 0;
}