# This file show virtualFunction can be rewrite in derivaded

#include <iostream>
using namespace std;

class Base {
public:
    virtual void virtualFunction() {
        cout << "Virtual function in the base class." << endl;
    }
};

class Derived : public Base {
public:
    void virtualFunction() {
        cout << "Virtual function in the derived class." << endl;
    }
};

int main() {
    Base *baseObject = new Derived();
    baseObject->virtualFunction(); // Output: Virtual function in the base class.
    delete baseObject;

    return 0;
}
