#include <iostream>

class MyClass {
public:
    static int count; // Static variable shared among all instances
    int instanceVar;

    MyClass() {
        count++;
        instanceVar = 0;
    }
};

int MyClass::count = 0; // Initialize the static variable

int main() {
    MyClass obj1;
    MyClass obj2;

    std::cout << "Count: " << MyClass::count << std::endl; // Accessing the static variable

    return 0;
}
