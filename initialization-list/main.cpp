#include <iostream>
#include <string>

using namespace std;

class AnotherClass {};

class Inicializer {
public:
    // start x and y with 0
    Inicializer() : x(0), y(0) {
        // code ...
    }

    // start x with a and y with b
    Inicializer(int a, int b) : x(a), y(b) {
        // code ...
    }

    // start nome with a string
    Inicializer(const string& name) : name(name) {
        // code ...
    }

    // initialization list for class
    Inicializer(const AnotherClass& anotherClass) : complexMember(anotherClass) {
        // code ...
    }

private:
    int x;
    int y;
    string name;
    AnotherClass complexMember;
};

int main() {
    // Constructors
    Inicializer object1;
    Inicializer object2(42, 17);
    Inicializer object3("Example of string");
    AnotherClass otherClass;
    Inicializer object4(otherClass);

    return 0;
}
