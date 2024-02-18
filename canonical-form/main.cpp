#include <iostream>

// Base class
class Animal {
public:
    Animal() {
        std::cout << "Animal constructor\n";
    }
    
    Animal(const Animal& other) {
        std::cout << "Animal copy constructor\n";
    }
    
    Animal& operator=(const Animal& other) {
        std::cout << "Animal assignment operator\n";
        return *this;
    }
    
    ~Animal() {
        std::cout << "Animal destructor\n";
    }
    
    void makeSound() {
        std::cout << "Animal sound\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog() {
        std::cout << "Dog constructor\n";
    }
    
    Dog(const Dog& other) {
        std::cout << "Dog copy constructor\n";
    }
    
    Dog& operator=(const Dog& other) {
        std::cout << "Dog assignment operator\n";
        return *this;
    }
    
    ~Dog() {
        std::cout << "Dog destructor\n";
    }
    
    void wagTail() {
        std::cout << "Dog wagging tail\n";
    }
};

int main() {
    Dog dog;
    dog.makeSound(); // Call base class function
    dog.wagTail();   // Call derived class function
    return 0;
}
